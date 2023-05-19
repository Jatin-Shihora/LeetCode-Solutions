function helper(key: string, value: any): any {
  if (value && typeof value === "object" && !Array.isArray(value)) {
    return Object.fromEntries(Object.entries(value).sort());
  } else {
    return value;
  }
}

function areDeeplyEqual(o1: any, o2: any): boolean {
  const stringifiedO1 = JSON.stringify(o1, helper);
  const stringifiedO2 = JSON.stringify(o2, helper);

  return stringifiedO1 === stringifiedO2;
}