class Solution {
public:
   bool validMountainArray(vector<int>& A) {
	//A mountain array can exist only when there are 3 or more elements
    if(A.size()<3) return false;
    //We will use a pointer to go through the entire vector
    int pointer=1;
    while(pointer<A.size()){
    	//We check if we are climbing the mountain
    	//It is supposed that we are climbing only when the element i is greater than element i-1
    	if(A[pointer-1]<A[pointer]) pointer++;
    	//If we are not climbing anymore, we break the loop
    	else break;
	}
	
	//Now, after climbing we check 2 cases:
	//1) The pointer is at the last element, which means that there are no elements more, so the mountain
	//is only increasing in height and never decreasing
	//2) The pointer has not been increased, which means that vector[0]>=vector[1] (like [90, 14, 16, 17 ... ]
	if(pointer==A.size()||pointer==1) return false;
	//Then, we are looking for the slope (height decreasing)
	while(pointer<A.size()){
		if(A[pointer-1]>A[pointer]){
			pointer++;
		} else break;
	}
	//Now, if the i==A.size it means that it is a mountain array because it has been only decreasing since the peak was met.
	//Otherwise, it's not a mountain.
	if(pointer==A.size()) return true;
	else return false;
	//If it was helpful for you, don't forget to smash that upvote button <3
}
};