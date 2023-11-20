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
        int gtruck = 1, ptruck = 1, mtruck = 1, ans = 0;
        for (int i = 0; i < garbage.size(); i++) {
            int dist = i ? travel[i - 1] : 0;
            gtruck += dist, ptruck += dist, mtruck += dist;
            for (auto& c : garbage[i])
                if (c == 'P')
                    ans += ptruck, ptruck = 1;
                else if (c == 'G')
                    ans += gtruck, gtruck = 1;
                else
                    ans += mtruck, mtruck = 1;
        }
        return ans;
    }
};