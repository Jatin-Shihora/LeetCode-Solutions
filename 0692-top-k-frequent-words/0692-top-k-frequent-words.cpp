class Solution {
public:
    struct comparator{
      bool operator() (pair<int,string>& a, pair<int,string>& b){
          if(a.first == b.first) return a.second<b.second; // if frequency are equal put lexicographically greater element on top
          else return a.first > b.first;// if frequency are not equal put the elements on top which has less frequency
      }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        
        // declare a map which store the frequency of words
        unordered_map<string,int>mp;
        for(auto word: words){
            mp[word]++;
        }
        
        // declare a priority queue
        priority_queue<pair<int,string>, vector<pair<int,string>>, comparator > pq;
        for(auto x: mp){
            if(pq.size()<k) pq.push({x.second,x.first}); // firstly push k elements into pq
            else {
                if(pq.top().first<x.second || (pq.top().first == x.second && pq.top().second > x.first)){
                    pq.pop();
                    pq.push({x.second, x.first});
                }
            }
        }
        
        // push all the elements from pq to res
        vector<string> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        // reverse the res
        reverse(res.begin(), res.end());
        return res;
    }
};