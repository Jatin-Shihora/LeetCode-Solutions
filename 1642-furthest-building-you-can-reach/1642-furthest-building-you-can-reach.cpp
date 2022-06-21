class Solution {
public:
int furthestBuilding(vector<int>& H, int bricks, int ladders) {
	priority_queue<int> pq;
	int n = size(H), i = 0, jumpHeight = 0;
	for(; i < n - 1; i++) {
		jumpHeight = H[i + 1] - H[i];
		if(jumpHeight <= 0) continue;
		pq.push(-jumpHeight); // notice the '-'
		if(size(pq) > ladders) 
			bricks += pq.top(), pq.pop();
		if(bricks < 0) return i;
	}
	return i;
}
};