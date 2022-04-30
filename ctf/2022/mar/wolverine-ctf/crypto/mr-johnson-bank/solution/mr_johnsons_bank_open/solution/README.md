# Mr. Johnson's Bank 1

# Description

How quickly can you break into Mr. Johnson's bank account? Tick Tock!

# Vulnerability Details

This challenge is a simplified version of a [Timing attack](https://en.wikipedia.org/wiki/Timing_attack#Algorithm), a
cryptographic side-channel. Specifically, variable time string comparison.

When comparing two strings (or anything in a cryptographic setting for that matter), care must be taking to ensure all
operations are constant time, that is operations take the same time regardless of inputs. For this challenge, we
artificially increase the timing difference for string comparisons to make it easier for players to detect. Each correct
character comparison takes 100ms, and the comparison returns on first incorrect character. Length checks are not
performed. Pure brute forcing the password would take an average of (62^9)/2 or. If a user is able to guess the `pass`,
then an average of (62^5)/2. This is infeasible. The vulnerability reduces this to (62\*9)/2 and (62\*5)/2 respectively.

```js
async function checkPassword(attempt, correct) {
    for (let i = 0; i < correct.length; i++) {
        if (i === attempt.length) {
            return false;
        }
        if (attempt[i] !== correct[i]) {
            return false;
        }
        await sleep(100);
    }
    return true;
}
```

# Solution

The challenge begins with a login page (username and password) for a fictional bank called "Mr. Johnson's Bank". In
addition, there is a note, left by Mr. Johnson. This note includes two key pieces of information. Firstly, it includes
Mr. Johnson's full name ("William Johnson") used for the username. Secondly, the bolded phrases "time" and "Tick Tock",
both hint towards the timing attack vulnerability.

The player guesses the username. Either `williamjohnson` or `wjohnson` is accepted.

The password begins with `pass`. Users who attempt common passwords such as `password` should notice the additional 200
ms it takes to load. However, this is not necessary. The correct password is `passe9f6x`. A node script `solution.js`
provides an example script to find the password. It is assumed the server is running on `localhost:3000`. The script
took less than 2 minutes locally.

After found, the username and password can be entered on the site. Users will see the flag under the Transaction
History.

The flag is `MD5 ("You hacked Mr.Johnson") = 99eae35043c31a481e26f94feb9ed3fe`.
