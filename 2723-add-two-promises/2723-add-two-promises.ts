async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
    const [res1, res2] = await Promise.all([promise1, promise2]);
    return res1 + res2;
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */