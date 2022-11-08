class Solution 
{
public:
    string makeGood(string s) 
    {
        string ss;
        
        for (char c : s)
            if (!ss.empty() && (ss.back() ^ c) == 32)  // in ASCII, 32 = a - A = b - B = ...
                ss.pop_back();                // thus, we check that the absolute value
            else                           // of the difference between the adjacent
                ss.push_back(c);               // characters is 32 (here, I use xor)
        
        return ss;
    }
};