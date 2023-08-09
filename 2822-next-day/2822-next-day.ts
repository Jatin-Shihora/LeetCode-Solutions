declare global {
    interface Date {
        nextDay(): string;
    }
}

Date.prototype.nextDay = function() {
    const daysInMonth: number[] = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    
    const year: number = this.getFullYear();
    const month: number = this.getMonth();
    const day: number = this.getDate();
    
    const isLeapYear: boolean = (year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0);
    if (isLeapYear) {
        daysInMonth[1] = 29;
    }

    const maxDays: number = daysInMonth[month];
    
    let nextYear: number = year;
    let nextMonth: number = month;
    let nextDay: number = day + 1;

    if (nextDay > maxDays) {
        nextDay = 1;
        nextMonth += 1;
        if (nextMonth > 11) {
            nextMonth = 0;
            nextYear += 1;
        }
    }

    const formattedDate: string = `${nextYear}-${String(nextMonth + 1).padStart(2, '0')}-${String(nextDay).padStart(2, '0')}`;
    return formattedDate;
};
