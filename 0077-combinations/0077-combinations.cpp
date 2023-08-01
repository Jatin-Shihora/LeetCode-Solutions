class Solution {
  public: 
  vector < vector < int >> combine(int n, int k) {
    vector < vector < int >> ans;
    vector < int > temp;
    combine(1, n, k, ans, temp);
    return ans;
  }
  private: 
  void combine(int begin, int n, int k, vector < vector < int >> & ans, vector < int > & temp){
    if (k == 0) {
      ans.push_back(temp);
      return;
    }
    for (int i = begin; n - i + 1 >= k; i++) {
      temp.push_back(i);
      combine(i + 1, n, k - 1, ans, temp);
      temp.pop_back();
    }
  }
};