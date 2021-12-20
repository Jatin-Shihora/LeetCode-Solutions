class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        #sort the array using built in method which gives us a TC of O(nlogn)
        arr.sort()
        #A pair which has difference and a result list of two points which stores the min absolute difference
        min_diff, result = sys.maxsize, []
        #Traverse the given array takes O(n) time
        for i, val in enumerate(arr[0:len(arr) - 1]):
            #if diff<min diff 
            if arr[i + 1] - val < min_diff:
                min_diff, result = arr[i + 1] - val, [[val, arr[i + 1]]]
            #min diff == diff then add the pair
            elif arr[i + 1] - val == min_diff:
                result.append([val, arr[i + 1]])
        return result