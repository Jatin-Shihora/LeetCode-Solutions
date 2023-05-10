type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
  let acc = init;
  for (let i = 0; i < nums.length; i++) {
    acc = fn(acc, nums[i]);
  }
  return acc;
};