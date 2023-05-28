class EventEmitter {
    constructor() {
        this.store = {};
    }

    subscribe(event, cb) {
        if (this.store[event] === undefined) this.store[event] = [];
        this.store[event].push(cb);

        return {
            unsubscribe: () => {
                this.store[event] = this.store[event].filter(fn => fn !== cb);
            }
        };
    }

    emit(event, args = []) {
        return (this.store[event] || []).map(fn => fn(...args));
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