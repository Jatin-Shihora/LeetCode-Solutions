class Solution {
    public int maxBoxesInWarehouse(int[] boxes, int[] warehouse) {
        int n = warehouse.length;

        Arrays.sort(boxes);
        
        int left = 0;
        int right = n - 1;
        int count = 0;
        int i = boxes.length - 1;

        while (left <= right && i >= 0) {
            if (boxes[i] <= warehouse[left]) {
                count++;
                left++;
            } else if (boxes[i] <= warehouse[right]) {
                count++;
                right--;
            }
            i--;
        }

        return count;
    }
}