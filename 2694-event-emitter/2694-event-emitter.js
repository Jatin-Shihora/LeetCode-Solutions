class EventEmitter {
  constructor() {
    this.events = {};
  }

  subscribe(event, cb) {
    if (!(event in this.events)) {
      this.events[event] = new Set([cb]);
    } else {
      this.events[event].add(cb);
    }

    return {
      unsubscribe: () => {
        this.events[event].delete(cb);
      },
    };
  }

  emit(event, args = []) {
    if (!(event in this.events)) return [];
    const result = [];
    this.events[event].forEach((fn) => {
      result.push(fn(...args));
    });
    return result;
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */