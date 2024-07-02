class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int waitTime = 0;
        int nextIdleTime = 0;
        long long netWaitTime = 0;

        for (int i = 0; i < customers.size(); i++) {
            // If the chef is idle, then the preparation starts immediately.
            if (customers[i][0] >= nextIdleTime) {
                waitTime = customers[i][1];
            } else {
                // If the chef is not idle, then the customer has to wait some
                // extra time, apart from the preparation time.
                waitTime = nextIdleTime - customers[i][0] + customers[i][1];
            }

            // The next idle time for the chef is given by the time of delivery
            // of current customer's order.
            nextIdleTime = customers[i][0] + waitTime;
            netWaitTime += waitTime;
        }

        // Divide by total customers to get average.
        double averageWaitTime = static_cast<double>(netWaitTime) / customers.size();
        return averageWaitTime;
    }
};