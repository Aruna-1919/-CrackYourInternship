class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num={}
        for index,n in enumerate(nums):
            compliment=target-n
            if compliment in num:
                return [num[compliment],index]
            num[n]=index
