class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> sortedPeople(people.begin(), people.end());
        sort(sortedPeople.begin(), sortedPeople.end());
        
        sort(flowers.begin(), flowers.end());
        unordered_map<int, int> dic;
        priority_queue<int, vector<int>, greater<int>> heap;
        
        int i = 0;
        for (int person : sortedPeople) {
            while (i < flowers.size() && flowers[i][0] <= person) {
                heap.push(flowers[i][1]);
                i++;
            }
            
            while (!heap.empty() && heap.top() < person) {
                heap.pop();
            }
            
            dic[person] = heap.size();
        }
        
        vector<int> ans;
        for (int person : people) {
            ans.push_back(dic[person]);
        }
        
        return ans;
    }
};