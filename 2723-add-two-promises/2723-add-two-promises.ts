async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
  return new Promise<number>((resolve, reject) => {
    let count = 2;
    let res = 0;

    [promise1, promise2].forEach(async (promise) => {
      try {
        const subRes = await promise;
        res += subRes;
        count--;

        if (count === 0) {
          resolve(res);
        }
      } catch (err) {
        reject(err);
      }
    });
  });
}
