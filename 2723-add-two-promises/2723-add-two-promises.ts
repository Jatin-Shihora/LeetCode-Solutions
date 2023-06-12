async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
  try {
    const [res1, res2] = await Promise.all([promise1, promise2]);
    return res1 + res2;
  } catch (error) {
    console.error(error);
    throw error; // Rethrow the error to maintain the behavior of propagating the error to the caller
  }
}
