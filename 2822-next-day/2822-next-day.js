Date.prototype.nextDay = function() {
    const daysInMonth = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    const year = this.getFullYear();
    const month = this.getMonth();
    const day = this.getDate();

    const isLeapYear = (year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0);
    if (isLeapYear) {
        daysInMonth[1] = 29;
    }

    const maxDays = daysInMonth[month];
    let nextYear = year;
    let nextMonth = month;
    let nextDay = day + 1;

    if (nextDay > maxDays) {
        nextDay = 1;
        nextMonth += 1;
        if (nextMonth > 11) {
            nextMonth = 0;
            nextYear += 1;
        }
    }

    const formattedDate = `${nextYear}-${String(nextMonth + 1).padStart(2, '0')}-${String(nextDay).padStart(2, '0')}`;
    return formattedDate;
};


 /**
 * const date = new Date("2014-06-20");
 * date.nextDay(); // "2014-06-21"
 */