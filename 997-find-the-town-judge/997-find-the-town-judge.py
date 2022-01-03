class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        Trusted = [0] * (N+1)
        for (a, b) in trust:
            Trusted[a] -= 1
            Trusted[b] += 1
            
        for i in range(1, len(Trusted)):
            if Trusted[i] == N-1:
                return i
        return -1