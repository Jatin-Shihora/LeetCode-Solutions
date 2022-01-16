// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N) {
    int pos[8][2] = {{-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, -1}, {2, 1}, {-1, -2}, {1, -2}};
    bool vis[N+1][N+1];
    memset(vis, 0, sizeof(vis));
    vis[KnightPos[0]][KnightPos[1]] = 1;
    queue<pair<int, int>> q;
    q.push({KnightPos[0], KnightPos[1]});
    int steps = 0;
    while(!q.empty()) {
        int sz = q.size();
        while(sz--) {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first, y = p.second;
            if(x == TargetPos[0] && y == TargetPos[1])
                return steps;
            for(int k=0; k<8; k++) {
                int a = x + pos[k][0], b = y + pos[k][1];
                if(a>0 && a<=N && b>0 && b<=N && !vis[a][b]) {
                    q.push({a, b});
                    vis[a][b] = 1;
                }
            }
        }
        steps++;
    }
    return -1;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends