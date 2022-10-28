from decimal import DivisionByZero


class Padic:
    def __init__(self, p, precision=32):
        self.p = p
        self.value = None
        self.mantissa = []
        self.order = 0
        self.precision = precision

    def initialize_by_value(self, value):
        self.value = value
        v = value
        self.mantissa = []
        self.order = 0
        while v % self.p == 0:
            self.order += 1
            v = v // self.p
            if self.order == self.precision:
                self.order = 0
                break
        while v:
            d = v % self.p
            self.mantissa.append(d)
            v = v // self.p
            if len(self.mantissa) == self.precision:
                break
        for _ in range(self.precision - len(self.mantissa)):
            self.mantissa.append(0)

    def initialize(self, mantissa, order):
        self.order = order
        self.mantissa = mantissa

    def __str__(self):
        r = [str(x) for x  in self.mantissa]
        r.reverse()
        res = ''.join(r)
        if self.order >= 0:
            res = res + '0' * self.order
        else:
            res = res[:self.order] + '.' + res[self.order:]
        return res

    def dump(self):
        r = [str(x) for x in self.mantissa]
        res = ','.join(r)
        res += 'Ord' + str(self.order)
        return res

    @staticmethod
    def undump(dump, p):
        parts = dump.split("Ord")
        mantissa = []
        for m in parts[0].split(','):
            mantissa.append(int(m))
        order = int(parts[1])
        precision = len(mantissa)
        a = Padic(p, precision)
        a.initialize(mantissa, order)
        return a

    def get_value(self):
        if self.value:
            return self.value
        res = 0
        for i, m in enumerate(self.mantissa):
            res += m * (self.p ** i)
        res *= self.p ** self.order
        return res

    def is_zero(self):
        res = True
        for m in self.mantissa:
            if m != 0:
                res = False
                break
        return res

    def __add__(self, other):
        if self.p != other.p or self.precision != other.precision:
            raise Exception("Different parameters. Uncomparisonable")
        res = Padic(self.p, self.precision)
        order = min(self.order, other.order)
        l = []
        r = []
        mantissa = []
        shift = self.order - other.order
        if shift >= 0:
            for _ in range(shift):
                l.append(0)
            l.extend(self.mantissa)
            l = l[:self.precision]
            r = other.mantissa.copy()
        else:
            l = self.mantissa.copy()
            for _ in range(-shift):
                r.append(0)
            r.extend(other.mantissa)
            r = r[:self.precision]
        carry = 0
        for i in range(self.precision):
            bit = l[i] + r[i] + carry
            mantissa.append(bit % self.p)
            carry = bit // self.p
        while mantissa[0] == 0:
            order += 1
            mantissa = mantissa[1:] + [0]
            if order == self.precision:
                order = 0
                break
        res.initialize(mantissa, order)
        return res

    def __neg__(self):
        res = Padic(self.p, self.precision)
        mantissa = []
        carry = 0
        for i in range(self.precision):
            mantissa.append((self.p - self.mantissa[i] - carry) % self.p)
            carry = 1 - (self.p - self.mantissa[i] - carry) // self.p
        res.initialize(mantissa, self.order)
        return res

    def __mul__(self, other):
        if self.p != other.p or self.precision != other.precision:
            raise Exception("Different parameters. Uncomparisonable")
        res = Padic(self.p, self.precision)
        res.initialize_by_value(0)
        order = self.order + other.order
        for i in range(self.precision):
            d = self.mantissa[i]
            s = other.multiply_on_digit(d)
            s.initialize(s.mantissa, i)
            res = res + s
        res.initialize(res.mantissa, order)
        return res

    def multiply_on_digit(self, n):
        res = Padic(self.p, self.precision)
        mantissa = []
        carry = 0
        i = 0
        for i in range(self.precision):
            d = self.mantissa[i]
            mantissa.append((d * n + carry) % self.p)
            carry = (d * n + carry) // self.p
        res.initialize(mantissa, self.order)
        return res

    @staticmethod
    def _invert_digit(p, d):
        for i in range(1, p):
            if (i * d) % p == 1:
                return i

    def invert(self):
        one = Padic(self.p, self.precision)
        one.initialize_by_value(1)
        return one / self

    def __sub__(self, other):
        return self + (-other)

    def __truediv__(self, other):
        if self.p != other.p or self.precision != other.precision:
            raise Exception("Different parameters. Uncomparisonable")
        res = Padic(self.p, self.precision)
        if other.is_zero():
            raise DivisionByZero()
        order = self.order - other.order
        mantissa = []
        temp = Padic(self.p, self.precision)
        temp.initialize(self.mantissa, 0)
        x = Padic._invert_digit(other.p, other.mantissa[0])
        for i in range(self.precision):
            if temp.order == i:
                bit = temp.mantissa[0]
            else:
                bit = 0
            mantissa.append((bit * x) % self.p)
            to_subtract = other.multiply_on_digit((bit * x) % self.p)
            to_subtract.initialize(to_subtract.mantissa, i)
            temp = temp - to_subtract
        res.initialize(mantissa, order)
        return res
