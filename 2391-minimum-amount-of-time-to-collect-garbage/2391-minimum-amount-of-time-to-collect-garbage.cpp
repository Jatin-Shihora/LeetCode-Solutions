/*
Observation 1:
"While one truck is driving or picking up garbage, the other two trucks cannot do anything."
We can simply sum up the total running time for each truck,
they don't affect each other.

Observation 2:
"Picking up one unit of any type of garbage takes 1 minute."
We don't care how many units for each type,
we only care the total amount.

Observation 3:
"however, they do not need to visit every house."
We only care the position of the last garbage for each type


Explanation
Firstly sum up the amount of gabages in total.
Second find up the last position for each type.
Calculate the prefix sum array of the travel distance.
Sum up the distance for each type of garbage.
*/

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int last[128] = {}, res = 0;
        for (int i = 0; i < garbage.size(); ++i) {
            res += garbage[i].size();
            for (char c : garbage[i])
                last[c] = i;
        }
        for (int j = 1; j < travel.size(); ++j)
            travel[j] += travel[j - 1];
        for (int c : "PGM")
            if (last[c])
                res += travel[last[c] - 1];
        return res;
    }
};