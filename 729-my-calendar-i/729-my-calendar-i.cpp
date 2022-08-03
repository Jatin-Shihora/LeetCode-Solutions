class MyCalendar {
    set<pair<int, int>>bookings;
public:    
    bool book(int s1, int e1) {
        auto slot = bookings.lower_bound({s1, e1});
        if( slot != end(bookings)   && !(slot -> first >= e1) ||      // a booked slot with nearest starting after s1 should also have its end after e1  => similar to case-1 
            slot != begin(bookings) && !(prev(slot) -> second <= s1)) // a booked slot with nearest starting before s1 should also end before s1  => similar to case-2
			    return false;         // if neither of above conditions satisfy, there exists a intersection
        bookings.insert({s1, e1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */