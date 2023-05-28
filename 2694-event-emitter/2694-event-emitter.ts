type Callback = (...args: any[]) => any;
type Subscription = {
  unsubscribe: () => void;
};

class EventEmitter {
  private events: { [event: string]: Callback[] };

  constructor() {
    this.events = {};
  }

  subscribe(event: string, cb: Callback): Subscription {
    this.events[event] = this.events[event] ?? [];
    this.events[event].push(cb);

    return {
      unsubscribe: () => {
        this.events[event].pop();
      },
    };
  }

  emit(event: string, args: any[] = []): any[] {
    if (!this.events[event]) return [];
    return this.events[event].map((f) => f(...args));
  }
}
