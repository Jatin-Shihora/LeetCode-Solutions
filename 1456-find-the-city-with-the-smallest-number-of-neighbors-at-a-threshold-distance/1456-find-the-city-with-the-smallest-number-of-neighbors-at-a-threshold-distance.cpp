class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // Adjacency list to store the graph
        vector<vector<pair<int, int>>> adjacencyList(n);
        // Matrix to store shortest path distances from each city
        vector<vector<int>> shortestPathMatrix(n, vector<int>(n, INT_MAX));

        // Initialize adjacency list and shortest path matrix
        for (int i = 0; i < n; i++) {
            shortestPathMatrix[i][i] = 0;  // Distance to itself is zero
        }

        // Populate the adjacency list with edges
        for (const auto& edge : edges) {
            int start = edge[0];
            int end = edge[1];
            int weight = edge[2];
            adjacencyList[start].emplace_back(end, weight);
            adjacencyList[end].emplace_back(start,
                                            weight);  // For undirected graph
        }

        // Compute shortest paths from each city using SPFA algorithm
        for (int i = 0; i < n; i++) {
            spfa(n, adjacencyList, shortestPathMatrix[i], i);
        }

        // Find the city with the fewest number of reachable cities within the
        // distance threshold
        return getCityWithFewestReachable(n, shortestPathMatrix,
                                          distanceThreshold);
    }

    // SPFA algorithm to find shortest paths from a source city
    void spfa(int n, const vector<vector<pair<int, int>>>& adjacencyList,
              vector<int>& shortestPathDistances, int source) {
        // Queue to process nodes with updated shortest path distances
        deque<int> queue;
        vector<int> updateCount(n, 0);
        queue.push_back(source);
        fill(shortestPathDistances.begin(), shortestPathDistances.end(),
             INT_MAX);
        shortestPathDistances[source] = 0;  // Distance to source itself is zero

        // Process nodes in queue
        while (!queue.empty()) {
            int currentCity = queue.front();
            queue.pop_front();
            for (const auto& [neighborCity, edgeWeight] :
                 adjacencyList[currentCity]) {
                if (shortestPathDistances[neighborCity] >
                    shortestPathDistances[currentCity] + edgeWeight) {
                    shortestPathDistances[neighborCity] =
                        shortestPathDistances[currentCity] + edgeWeight;
                    updateCount[neighborCity]++;
                    queue.push_back(neighborCity);

                    // Detect negative weight cycles (not expected in this
                    // problem)
                    if (updateCount[neighborCity] > n) {
                        cerr << "Negative weight cycle detected" << endl;
                    }
                }
            }
        }
    }

    // Determine the city with the fewest number of reachable cities within the
    // distance threshold
    int getCityWithFewestReachable(
        int n, const vector<vector<int>>& shortestPathMatrix,
        int distanceThreshold) {
        int cityWithFewestReachable = -1;
        int fewestReachableCount = n;

        // Count number of cities reachable within the distance threshold for
        // each city
        for (int i = 0; i < n; i++) {
            int reachableCount = 0;
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }  // Skip self
                if (shortestPathMatrix[i][j] <= distanceThreshold) {
                    reachableCount++;
                }
            }
            // Update the city with the fewest reachable cities
            if (reachableCount <= fewestReachableCount) {
                fewestReachableCount = reachableCount;
                cityWithFewestReachable = i;
            }
        }
        return cityWithFewestReachable;
    }
};