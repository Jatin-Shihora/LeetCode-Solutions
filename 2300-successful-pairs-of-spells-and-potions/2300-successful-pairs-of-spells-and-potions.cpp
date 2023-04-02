/*
For each spell,
it needs ceil integer of need = success * 1.0 / spell.
........................
Binary search the index of first potion >= need in the sorted potions.
The number of potions that are successful are potions.length - index
........................
Accumulate the result res and finally return it.
*/
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (int a: spells) {
            long need = (success + a - 1) / a;
            auto it = lower_bound(potions.begin(), potions.end(), need);
            res.push_back(potions.end() - it);
        }
        return res;
    }
};