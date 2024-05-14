problem link:-
  https://leetcode.com/problems/power-of-three/description/
code:-
Approach 1:-
    time complexity is o(logn)

    class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        while(n%3 == 0){
            n /= 3;
        }
        return n==1;  
    }
};
  Approach 2:-
  
    
  class Solution {
public:
    bool isPowerOfThree(int n) {
        /*

        Int values range from 2−312^{-31}2 
−31
  to 231−12^{31}-12 
31
 −1, which makes 319=1,162,261,4673^{19} = 1,162,261,4673 
19
 =1,162,261,467 the largest possible power of three in this problem. The next power 320=3,486,784,4013^{20} = 3,486,784,4013 
20
 =3,486,784,401 which is larger than max Integer in Java (2,147,483,6472,147,483,6472,147,483,647). 3193^{19}3 
19
  should be dividable by other powers of three without a remainder.

  */

     return n > 0 && 1162261467 % n == 0;
    }
};
