/**
 * @param {string} start
 * @param {string} end
 * @param {number} step
 * @yields {string}
 */
 
var dateRangeGenerator = function (start, end, step) {
    const startDate = new Date(start);
    const endDate = new Date(end);
    const datesList = [];

    while (startDate <= endDate) {
        datesList.push(formatDate(startDate));
        startDate.setDate(startDate.getDate() + step);
    }

    return datesList;
}

// Helper function to format the date
function formatDate(date) {
    const year = date.getFullYear();
    const month = String(date.getMonth() + 1).padStart(2, '0');
    const day = String(date.getDate()).padStart(2, '0');
    return `${year}-${month}-${day}`;
}


/**
 * const g = dateRangeGenerator('2023-04-01', '2023-04-04', 1);
 * g.next().value; // '2023-04-01'
 * g.next().value; // '2023-04-02'
 * g.next().value; // '2023-04-03'
 * g.next().value; // '2023-04-04'
 * g.next().done; // true
 */