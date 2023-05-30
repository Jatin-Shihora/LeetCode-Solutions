class EventEmitter {
    constructor() {
        this.events = {};
    }

    subscribe(event, cb) {
        // If no handlers for current event - initialize an empty list
        this.events[event] = this.events[event] ?? [];
        this.events[event].push(cb);

        return {
            unsubscribe: () => this.events[event].pop(),
        };
        if (this.events[event].length=== 0) { delete this.events[event] }
    }

    emit(event, args = []) {
        if (!this.events[event]) return [];
        return this.events[event].map(f => f(...args));
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