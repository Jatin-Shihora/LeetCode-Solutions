class Solution {
public:
    inline int getLength(int cnt){
        return cnt == 1?1:(cnt<10?2:(cnt<100?3:4));
    }
    int getLengthOfOptimalCompression(string s, int k) {
        int n = s.size();
        int dp[n+1][k+1];
        for(int i=n;i>=0;i--){
            for(int j=0;j<=k;j++){
                if(i==n) {
                    dp[n][j] = 0;
                    continue;
                }
                dp[i][j] = j>0 ? dp[i+1][j-1] : INT_MAX;
                int max_del = j, cnt =0;
                for(int i_end = i;i_end<n && max_del >= 0; i_end++){
                    if(s[i_end] == s[i]){
                        cnt++;
                        dp[i][j] = min(dp[i][j], getLength(cnt) + dp[i_end+1][max_del]);
                    }else{
                        max_del--;
                    }
                }
            }
        }
        return dp[0][k];
    }
};