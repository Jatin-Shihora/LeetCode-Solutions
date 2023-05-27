type Callback = (...args: any[]) => any;
type Subscription = {
    unsubscribe: () => void
}

class EventEmitter {
    store = {};
    subscribe(event: string, cb: Callback): Subscription {
        // first time we had a callback for event
        if (this.store[event] === undefined) this.store[event] = [cb];
        // every other time
        else this.store[event].push(cb);
        return {
            unsubscribe: () => {
                this.store[event] = this.store[event].filter(fn => fn !== cb);
            }
        };
    }

    emit(event: string, args: any[] = []): any {
        return (this.store[event] || []).map(fn => fn(...args));
    }
}