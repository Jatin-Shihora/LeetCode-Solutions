class Solution {
public:
    bool makesquare(vector<int>& M) {
        sort(M.begin(), M.end(), greater<int>());
        int total = accumulate(M.begin(), M.end(), 0);
        side = total / 4;
        if ((float)total / 4 > side || M[0] > side)
            return false;
        return btrack(0, side, 0, M);
    }
private:
    int side;
    bool btrack(int i, int space, int done, vector<int>& M) {
        if (done == 3)
            return true;
        for (; i < M.size(); i++) {
            int num = M[i];
            bool res;
            if (num > space)
                continue;
            M[i] = side + 1;
            if (num == space)
                res = btrack(1, side, done+1, M);
            else
                res = btrack(i+1, space-num, done, M);
            if (res)
                return true;
            M[i] = num;
            while (i < M.size() and M[i+1] == num)
                i++;
        }
        return false;
    }
};