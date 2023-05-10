type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
let acc = init;
  nums.forEach((element: number) => {
    acc = fn(acc, element);
  });
  return acc;
};