class Solution {
    int n, m;
    vector<string> pizza;
    typedef long long int LL;
    LL P = 1e9 + 7;
    LL g[55][55];
    LL f[55][55][15];
    
    int dp(int r, int c, int rest) {
        if (f[r][c][rest] != -1) return f[r][c][rest];
        
        if (rest == 0) {
            if (g[r][c] > 0) f[r][c][rest] = 1;
            else f[r][c][rest] = 0;
            return f[r][c][rest];
        }
        
        f[r][c][rest] = 0;
        
        // cut horizontally to [row, i-1] [i, n-1]
        for (int i = r + 1; i < n; i++) {
            if (g[r][c] - g[i][c] > 0 && g[i][c] >= rest) {
                f[r][c][rest] = (f[r][c][rest] + dp(i, c, rest - 1)) % P;
            }
        }
        
        // cut vertically to [col, j-1] [j, m-1]
        for (int j = c + 1; j < m; j++) {
            if (g[r][c] - g[r][j] > 0 && g[r][j] >= rest)
                f[r][c][rest] = (f[r][c][rest] + dp(r, j, rest - 1)) % P;
        }
        
        return f[r][c][rest];
    }
    
public:
    int ways(vector<string>& pizza, int k) {
        n = pizza.size();
        m = pizza[0].length();
        this->pizza = pizza;
        
        memset(g, 0, sizeof(g));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                g[i][j] = g[i][j+1];
                for (int l = i; l < n; l++)
                    g[i][j] += (pizza[l][j] == 'A');
            }
        }
        
        memset(f, -1, sizeof(f));
        
        return dp(0, 0, k-1);
    }
};