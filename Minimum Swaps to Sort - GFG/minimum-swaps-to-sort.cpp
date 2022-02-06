// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int len = nums.size(), ctr = 0;
	    unordered_map<int,int>mp;
	    vector<int>vec;
	    for(int i=0;i<nums.size();i++){
	        vec.push_back(nums[i]);
	        mp[nums[i]] = i;
	    }
	    sort(vec.begin(),vec.end());
	    for(int i=len-1;i>=0;i--){
	        int idx = mp[vec[i]];
	        if(i!=idx) ctr++;
	        mp[nums[i]] = idx;
	        swap(nums[i],nums[idx]);
	    }
	    return ctr;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends