var promisify = (fn) => async (...args) =>
  new Promise((resolve, reject) =>
    fn((data, err) => err ? reject(err) : resolve(data), ...args)
  );