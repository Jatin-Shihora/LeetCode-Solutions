class Solution:
    def maxScore(self, nums: List[int]) -> int:
        max_score = 0
        
        def dfs(remaining, temp):
            if len(remaining) == 2:
                temp = sorted(temp + [gcd(*remaining)])
                score = sum(i*a for i, a in enumerate(temp, start=1))
                nonlocal max_score
                if score > max_score:
                    max_score = score
            else:
                for i, r in enumerate(remaining[1:], start=1):
                    dfs(remaining[1:i] + remaining[i+1:], temp + [gcd(remaining[0], r)])
            
        dfs(nums, [])
        return max_score