class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        for i in range(len(nums)):
            base = nums[i]
            for j in range(len(nums)):
                
                if i == j:
                    continue
                
                other = nums[j]
                
                if base + other == target:
                    return [i, j]
