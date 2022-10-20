//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getSum(int x, int y, int z) {

        int mod = (int)(1e9 + 7);

        // exactsum[i][j][k] stores the sum of
        // all the numbers having exact
        // i 4's, j 5's and k 6's
        long long exactsum[x + 1][y + 1][z + 1];

        // exactnum[i][j][k] stores numbers
        // of numbers having exact

        // i 4's, j 5's and k 6's
        long long exactnum[x + 1][y + 1][z + 1];

        memset(exactnum, 0, sizeof exactnum);
        memset(exactsum, 0, sizeof exactsum);

        long long ans = 0;
        exactnum[0][0][0] = 1;

        for (int i = 0; i <= x; ++i) {
            for (int j = 0; j <= y; ++j) {
                for (int k = 0; k <= z; ++k) {

                    // Computing exactsum[i][j][k]
                    // as explained above
                    if (i > 0) {
                        exactsum[i][j][k] += (exactsum[i - 1][j][k] * 10 +
                                              4 * exactnum[i - 1][j][k]) %
                                             mod;
                        exactnum[i][j][k] += exactnum[i - 1][j][k] % mod;
                    }
                    if (j > 0) {
                        exactsum[i][j][k] += (exactsum[i][j - 1][k] * 10 +
                                              5 * exactnum[i][j - 1][k]) %
                                             mod;
                        exactnum[i][j][k] += exactnum[i][j - 1][k] % mod;
                    }
                    if (k > 0) {
                        exactsum[i][j][k] += (exactsum[i][j][k - 1] * 10 +
                                              6 * exactnum[i][j][k - 1]) %
                                             mod;
                        exactnum[i][j][k] += exactnum[i][j][k - 1] % mod;
                    }

                    ans += exactsum[i][j][k] % mod;
                    ans %= mod;
                }
            }
        }
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        Solution ob;
        cout << ob.getSum(x, y, z) << "\n";
    }
    return 0;
}

// } Driver Code Ends