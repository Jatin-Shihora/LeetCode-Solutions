async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
    return promise1.then((val) => promise2.then((val2) => val + val2))
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */