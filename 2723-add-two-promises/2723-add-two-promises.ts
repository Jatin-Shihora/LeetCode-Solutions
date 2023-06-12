async function addTwoPromises(promise1: Promise<number>, promise2: Promise<number>): Promise<number> {
  try {
    return promise1.then((val) => promise2.then((val2) => val + val2)).catch((error) => {
      console.error(error);
      throw error; // Rethrow the error to maintain the behavior of propagating the error to the caller
    });
  } catch (error) {
    console.error(error);
    throw error; // Rethrow the error to maintain the behavior of propagating the error to the caller
  }
}
