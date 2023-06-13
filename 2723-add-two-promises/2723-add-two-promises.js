var addTwoPromises = async function(promise1, promise2) {
  try {
    return promise1.then((val) => promise2.then((val2) => val + val2))
  } catch (error) {
    console.error(error);
    throw error; // Rethrow the error to maintain the behavior of propagating the error to the caller
  }
};
/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */