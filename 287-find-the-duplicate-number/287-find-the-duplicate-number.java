class Solution {
    public int findDuplicate(int[] nums) {
        int N = nums.length;
        int val = 0;
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        for(int i = 0; i< N; i++){
        if(map.containsKey(nums[i])){
            val = nums[i];
            break;
        }
        else map.put(nums[i], 1);
        }
        return val;
    }
}