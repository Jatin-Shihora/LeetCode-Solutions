declare global { 
    interface Function {
      callPolyfill(context: Record<any, any>, ...args: any[]): any;
	}
}

Function.prototype.callPolyfill = function(context: Record<any, any>, ...args: any[]): any {
  Object.defineProperty(context, 'fn', {
    value: this,
    enumerable: false,
  });

  return context.fn(...args);
};

/**
 * function increment() { this.count++; return this.count; }
 * increment.callPolyfill({count: 1}); // 2
 */