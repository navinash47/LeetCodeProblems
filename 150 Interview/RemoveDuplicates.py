# https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=study-plan-v2&envId=top-interview-150

#brute force
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i=1
        val= nums[0]
        while(i<len(nums)):
            if nums[i]==val:
                nums.pop(i)
            else:
                val=nums[i]
                i+=1
        return len(nums)

#better Algo

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        val= nums[0]
        count=0
        for i in range(1,len(nums)):
            if nums[i]!=val:
                val=nums[i]
                count+=1
                nums[count]=val
            i+=1

        return count+1