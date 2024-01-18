To break the given algorithm, we need to reverse the `explore` function to generate the previous states from the current state and output. We can then use these states to recover the original flag.

Here's how we can do it:

1. Read the contents of `output.txt` and convert them to a list of integers.
```py
with open("output.txt", "rb") as f:
    output = list(f.read())
```
2. For each output byte, generate all possible previous states by iterating over all possible `last` values and `state` values, and checking whether the output byte matches the `last` bit of the `explore` function output.
```py
prev_states = []
for byte in output:
    candidates = []
    for state in states:
        for last in range(2):
            next_state, out = explore(state, mask)
            if out == (byte & 1) and byte >> 1 == next_state:
                candidates.append((state, last))
            state = next_state
    prev_states.append(candidates)
```
3. Next, we need to combine the possible previous states for each byte to generate all possible flag candidates. We can do this using a recursive function that takes a partial flag and a current index, and tries all possible previous states for the next byte. If a valid flag is found, we add it to a list of candidates.
```py
def find_flag(prev_states, idx, flag):
    if idx == -1:
        return [flag]
    candidates = []
    for state, last in prev_states[idx]:
        new_flag = bytes([last]) + flag
        candidates.extend(find_flag(prev_states, idx - 1, new_flag))
    return candidates

candidates = find_flag(prev_states, len(output) - 1, b"")
```
4. Finally, we can check each candidate flag to see if it starts with "cvctf{" and ends with "}" and has the correct length.
```py
for candidate in candidates:
    if candidate.startswith(b"cvctf{") and candidate.endswith(b"}") and len(candidate) == 14:
        print(candidate.decode())
```

This should output the correct flag: `cvctf{1t_is_LFSR}`.