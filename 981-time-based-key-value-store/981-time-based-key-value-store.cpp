class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, vector<pair<int, string>>> m;
    void set(string key, string value, int timestamp) {
      m[key].push_back({ timestamp, value });
    }
    string get(string key, int timestamp) {
      auto it = upper_bound(begin(m[key]), end(m[key]), pair<int, string>(timestamp, ""), [](
        const pair<int, string>& a, const pair<int, string>& b) { return a.first < b.first; });
      return it == m[key].begin() ? "" : prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */