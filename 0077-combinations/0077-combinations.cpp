class Solution {
  public: 
  vector < vector < int >> combine(int n, int k) {
    vector < vector < int >> ans;
    vector < int > temp;
    combine(1, n, k, ans, temp); //call function to get combination of k numberswhich range is 1-n
    return ans;
  }
  private: 
  void combine(int begin, int n, int k, vector < vector < int >> & ans, vector < int > & temp) {
    if (k == 0) {
      ans.push_back(temp);
      return;
    }
    //condition : n-i+1 is the range, range must greater than k
    for (int i = begin; n - i + 1 >= k; i++) { // for the ith iteration, get the combination of i and k-1 numbers differ from i.
      temp.push_back(i);
      combine(i + 1, n, k - 1, ans, temp); //get the combination of k-1 numbers which range is (i+1,n)
      temp.pop_back();
    }
  }
};