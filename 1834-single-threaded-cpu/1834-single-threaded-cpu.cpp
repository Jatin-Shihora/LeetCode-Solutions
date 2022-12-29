class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        // min heap of tasks, sorted first by processing time then by index.
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        // `time` is the current time, `i` is the read pointer
        long N = tasks.size(), time = 0, i = 0; 

        // append the index to each task
        for (int i = 0; i < N; ++i) tasks[i].push_back(i); 

        // sort the input array so that we can take the tasks of small enqueueTime first
        sort(begin(tasks),end(tasks));

        vector<int> ans;

        // stop the loop when we exhausted the input array and the tasks in the heap.
        while(i<N || pq.size()){
            // nothing in the heap? try updating the current time using the processing time of the next task in array
            if(pq.empty()) time = max(time,(long)tasks[i][0]);
            
            // push all the tasks in the array whose enqueueTime <= currentTime into the heap
            while(i<N && time>=tasks[i][0]){
                pq.emplace(tasks[i][1],tasks[i][2]);
                ++i;
            }
            auto [pro,index] = pq.top();
            pq.pop();
            
            // handle this task and increase the current time by the processingTime
            time += pro;
            ans.push_back(index);
        }
        return ans;
    }
};