problem link:-
  https://leetcode.com/problems/power-of-four/description/
Code:-
  Approach 1:- used concept of log as n=4^x;
logn=xlog4;
x=log4(n)
  x=log10(n)/log10(4);
  
    class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n>0)
        {
            double x= (double)log(n)/log(4);
            if(x==floor(x)) 
                return true;
        }

        return false;
    }
};
  Approach 2:
    Time complexity is logn
  class Solution {
public:
    bool isPowerOfFour(int n) {
        
        while(n>=4){
            if(n % 4 == 0){
                n = n / 4;
            }
            else{
                return false;
            }
        }
        if(n == 1){
            return true;
        }
        return false;
    }
};
