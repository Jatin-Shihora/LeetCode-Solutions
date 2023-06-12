async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
  try {
    return await promise1 + await promise2;
  } catch (error) {
    console.error(error);
    throw error; // Rethrow the error to maintain the behavior of propagating the error to the caller
  }
}
