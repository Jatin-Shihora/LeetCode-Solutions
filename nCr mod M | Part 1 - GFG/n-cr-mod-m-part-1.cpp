// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
private:
    int mod = 1000003;
    vector<int> fac;
    vector<int> fac_inv;
    int power(int n, int m) {
        int res = 1;
        n %= mod;
        while(m > 0) {
            if(m & 1) {
                res = (1LL * res * n)%mod;
                m--;
            } else {
                n = (1LL * n * n)%mod;
                m /= 2;
            }
        }
        return res%mod;
    }
    int fermat(int n, int r) {
        n %= mod, r %= mod;
        if(n < r) return 0;
        if(r == 0 || n == r) return 1;
        return (1LL * fac[n] * fac_inv[r] * fac_inv[n-r])%mod;
    }
    long long lucas(long long n,long long r){
        if(r == 0) return 1;
        int ni = n % mod, ri = r % mod;
        return (lucas(n/mod,r/mod) * fermat(ni,ri)) % mod;
    }
public:
    Solution() {
        fac.resize(mod);
        fac_inv.resize(mod);

        fac[0] = 1;
        for(int i=1; i<mod; i++)
            fac[i] = (1LL * fac[i-1] * i)%mod;

        fac_inv[mod-1] = power(fac[mod-1], mod-2); // mod inverse
        for(int i=mod-2; i>0; i--)
            fac_inv[i] = (1LL * fac_inv[i+1] * (i+1))%mod;
    }
    int nCr(long long n, long long r) {
        return lucas(n, r);
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long n, r;
		cin >> n >> r;
		Solution obj;
		int ans = obj.nCr(n, r);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends