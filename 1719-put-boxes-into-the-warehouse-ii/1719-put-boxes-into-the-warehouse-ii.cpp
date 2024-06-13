class Solution {
   public:
    int maxBoxesInWarehouse(vector<int>& boxes, vector<int>& warehouse) {
        int warehouseSize = warehouse.size();

        // Sort the boxes by height
        sort(boxes.begin(), boxes.end());

        int leftIndex = 0;
        int rightIndex = warehouseSize - 1;
        int boxCount = 0;
        int boxIndex = boxes.size() - 1;

        // Iterate through the boxes from largest to smallest
        while (leftIndex <= rightIndex && boxIndex >= 0) {
            // Check if the current box can fit in the 
            // leftmost available room
            if (boxes[boxIndex] <= warehouse[leftIndex]) {
                boxCount++;
                leftIndex++;
                // Check if the current box can fit in the 
                // rightmost available room
            } else if (boxes[boxIndex] <= warehouse[rightIndex]) {
                boxCount++;
                rightIndex--;
            }
            boxIndex--;
        }

        return boxCount;
    }
};