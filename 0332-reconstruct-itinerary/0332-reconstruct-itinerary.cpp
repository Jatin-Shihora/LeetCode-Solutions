class Solution {
    // Depth-first search function to find the itinerary
    void dfs(unordered_map<string, multiset<string>>& adj, vector<string>& result, string s){
        // While there are destinations connected to the current airport
        while(adj[s].size()){
            // Get the next destination
            string v = *(adj[s].begin());
            // Remove this destination from the list
            adj[s].erase(adj[s].begin());
            // Recursively explore this destination
            dfs(adj, result, v);
        }
        // Add the current airport to the result
        result.push_back(s);
    }
public:
    // Main function to find the itinerary
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // Create an adjacency list to represent the flights
        unordered_map<string, multiset<string>> adj;
        for(vector<string>& t: tickets)
            // Add each destination to the multiset connected to its source airport
            adj[t[0]].insert(t[1]);
        
        // Initialize the result vector
        vector<string> result;
        // Start the depth-first search from JFK (John F. Kennedy International Airport)
        dfs(adj, result, "JFK");
        // Reverse the result to get the correct itinerary
        reverse(result.begin(), result.end());
        // Return the itinerary
        return result;
    }
};