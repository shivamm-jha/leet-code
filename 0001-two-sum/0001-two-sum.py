class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i in range(0,len(nums)):
            rem = target - nums[i]
            
            if rem in dict:
                return [i, dict[rem]]
            else:
                dict[nums[i]] = i
            
            
        