/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function (promise1, promise2) {
  return new Promise((resolve, reject) => {
    let count = 2;
    let res = 0; 
    
    [promise1, promise2].forEach(async promise => {
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
};



/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */