class Solution {

    public int numberOfSpecialSubstrings(String s) {
        int substringCount = 0;

        int start = 0;
        int[] freq = new int[26];
        for (int end = 0; end < s.length(); end++) {
            freq[s.charAt(end) - 'a']++;

            while (freq[s.charAt(end) - 'a'] > 1) {
                freq[s.charAt(start) - 'a']--;
                start++;
            }

            substringCount += (end - start + 1);
        }

        return substringCount;
    }
}