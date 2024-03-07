class Solution {
public:
    int pivotInteger(int n) {
        int leftPointer = 1;
        int rightPointer = n;
        int sumLeft = leftPointer;
        int sumRight = rightPointer;

        if(n==leftPointer)return n;
        // Iterate until the pointers meet
        while (leftPointer < rightPointer) {
            // Adjust sums and pointers based on comparison
            if (sumLeft < sumRight) {
                sumLeft += ++leftPointer;
            } else {
                sumRight += --rightPointer;
            }

            // Check for pivot condition
            if (sumLeft == sumRight && n !=leftPointer && leftPointer + 1 == rightPointer - 1) {
                return leftPointer + 1;
            }
        }

        return -1; // Return -1 if no pivot is found
    }
};