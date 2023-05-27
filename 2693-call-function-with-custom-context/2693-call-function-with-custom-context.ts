declare global { 
    interface Function {
      callPolyfill(context: Record<any, any>, ...args: any[]): any;
	}
}

Function.prototype.callPolyfill = function(context: Record<string, any>, ...args: any[]): any {
  Object.defineProperty(context, '__callPolyfill__', {
    value: this,
    enumerable: false,
  });

  const result = context['__callPolyfill__'](...args);
  delete context['__callPolyfill__'];

  return result;
};
/**
 * function increment() { this.count++; return this.count; }
 * increment.callPolyfill({count: 1}); // 2
 */