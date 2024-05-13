Problem link:
https://leetcode.com/problems/palindrome-number/description/

Code:-
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        if(x>=0 and x<=9)
        return true;
        else
        {
            long long  rev=0;
            int original_number=x;
            while(x!=0)
            {
                int rem=x%10;
                rev=rev*10+rem;
                x=x/10;
            }
            if(rev==original_number)
            return true;
        }
        return false;
    }
};
