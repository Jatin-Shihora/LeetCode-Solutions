class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long maxtime=*max_element(time.begin(),time.end()); // maximum time taken by a bus to complete one trip
        long long l=1, r=totalTrips*maxtime; // time range in which minimum time lies
        while(l<r){
            long long mid=(l+r)/2, actualTrips=0; // actualTrips would store the trips completed in time 0 to mid.
            for(int i=0;i<time.size();i++){
                actualTrips+=mid/time[i]; 
            }
            if(actualTrips<totalTrips) l=mid+1; // if the time mid is not enough, then the range would become  mid+1 to r.
            else r=mid; // if the time mid is enough than the minimum lies in the range l to mid.
        }
        return l;
    }
};