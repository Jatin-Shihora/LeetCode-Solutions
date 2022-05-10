class Solution {
    public int findDuplicate(int[] nums) {
        
        HashMap<Integer, Integer> hm = new HashMap<>();
        
        for (int num : nums) {
            if (!hm.containsKey(num)) {
                hm.put(num, num);
            }
            
            else {
                return num;
            }
        }
        return 0;
    }
}