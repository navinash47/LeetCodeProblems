# https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150
#Brute Force

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i=0
        while(i<len(nums)):
            if(nums[i]==val):
                nums.pop(i)
            else:
                i+=1
        return len(nums)

#Better Solution