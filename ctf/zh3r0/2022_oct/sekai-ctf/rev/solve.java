import java.util.Scanner;

// 
// Decompiled by Procyon v0.5.36
// 

public class Sekai
{
    private static int length;
    
    public static void main(final String[] array) {
        // 
        final Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the flag: ");
        // input le raha h yaha par
        final String next = scanner.next();
        //  len should be 43
        if (next.length() != 43) {
            System.out.println("Oops, wrong flag!");
            return;
        }

        // [0,6) -> SEKAI{
        final String substring = next.substring(0, Sekai.length);
        // [6,42)
        final String substring2 = next.substring(Sekai.length, next.length() - 1);
        // [42] -> }
        final String substring3 = next.substring(next.length() - 1);

        if (substring.equals("SEKAI{") && substring3.equals("}")) {
            //  36 
            assert substring2.length() == Sekai.length * Sekai.length;
            // calling solve function on substring2
            if (solve(substring2)) {
                System.out.println("Congratulations, you got the flag!");
            }
            else {
                System.out.println("Oops, wrong flag!");
            }
        }
        else {
            System.out.println("Oops, wrong flag!");
        }
    }
    
    public static String encrypt(final char[] array, final int n) {
        // data[12] -> [0,12)
        final char[] data = new char[Sekai.length * 2];
        // n2 = 5
        int n2 = Sekai.length - 1;
        // length = 6
        int length = Sekai.length;
        // ????
        for (int i = 0; i < Sekai.length * 2; ++i, ++i) {
            // data[0] = ARRAy[5] , n2 = 4 , data[2] = array[4] , n2 = 3 
            data[i] = array[n2--];
            data[i + 1] = array[length++];
        }
        // 
        for (int j = 0; j < Sekai.length * 2; ++j) {
            // create a new array from data named array2
            final char[] array2 = data;
            // // Doesn't copy elements of a[] to b[], only makes
            // b refer to same location
            // b = a;
            final int n3 = j;
            // data = xor(data , n)
            array2[n3] ^= (char)n;
        }
        //  [a] [b] [c] -> abc
        return String.valueOf(data);
    }
    
    public static char[] getArray(final char[][] array, final int n, final int n2) {
        // [0,12)
        final char[] array2 = new char[Sekai.length * 2];
        int n3 = 0;
        // nth row of array to array2 half
        for (int i = 0; i < Sekai.length; ++i) {
            array2[n3] = array[n][i];
            ++n3;
        }
        // reverse of n2 row to array2 next half
        for (int j = 0; j < Sekai.length; ++j) {
            array2[n3] = array[n2][Sekai.length - 1 - j];
            ++n3;
        }
        return array2;
    }
    
    //  convert array into 2-D matrix 
    public static char[][] transform(final char[] array, final int n) {
        final char[][] array2 = new char[n][n];
        // row by row 
        for (int i = 0; i < n * n; ++i) {
            array2[i / n][i % n] = array[i];
        }
        return array2;
    }
    // 
    public static boolean solve(final String s) {
        // convert to 2-D -> 6 * 6 matrix 
        final char[][] transform = transform(s.toCharArray(), Sekai.length);
        // 
        for (int i = 0; i <= Sekai.length / 2; ++i) {
            // i = 0 -> j =[0,5) , i =1 -> j =[0,3) , i = 2 -> j = [0,1) , i =3 -> will not run 
            for (int j = 0; j < Sekai.length - 2 * i - 1; ++j) {
                final char c = transform[i][i + j];
                transform[i][i + j] = transform[Sekai.length - 1 - i - j][i];
                transform[Sekai.length - 1 - i - j][i] = transform[Sekai.length - 1 - i][Sekai.length - 1 - i - j];
                transform[Sekai.length - 1 - i][Sekai.length - 1 - i - j] = transform[i + j][Sekai.length - 1 - i];
                transform[i + j][Sekai.length - 1 - i] = c;
            }
        }
        return "oz]{R]3l]]B#50es6O4tL23Etr3c10_F4TD2".equals(invokedynamic(makeConcatWithConstants:(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;, encrypt(getArray(transform, 0, 5), 2), encrypt(getArray(transform, 1, 4), 1), encrypt(getArray(transform, 2, 3), 0)));
    }
    
    static {
        // length = 6
        Sekai.length = (int)Math.pow(2.0, 3.0) - 2;
    }
}


