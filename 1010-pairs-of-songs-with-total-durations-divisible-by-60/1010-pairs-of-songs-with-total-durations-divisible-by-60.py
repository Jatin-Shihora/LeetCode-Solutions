class Solution(object):
    def numPairsDivisibleBy60(self, time):
        mapp = [0] * 60
        result = 0
        for x in time:
            result += mapp[-x % 60]
            mapp[x % 60] += 1
        return result
        