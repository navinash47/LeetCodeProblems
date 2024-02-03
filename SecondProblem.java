/*
https://leetcode.com/problems/palindrome-number/description/
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/

class Solution {
    public boolean isPalindrome(int x) {
        boolean res= true;
        ArrayList<Integer> digi_array= new ArrayList<Integer>();
        if(x>0){
            while(x!=0){
                int temp= x%10;
                digi_array.add(temp);
                x/=10;
            }
            for(int i=0;i<digi_array.size()/2;i++){
                if(digi_array.get(i)!=digi_array.get(digi_array.size()-i-1)){
                    res= false;
                    break;
                }
            }
        }
        else if(x<0) res= false;
        return res;
    }
}