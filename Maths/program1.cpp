Problem Link:-
https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

Code:-
class Solution {
  public:
    string armstrongNumber(int n){
        int new_number=0;
        int actual_number=n;
        while(n!=0)
        {
            int rem=n%10;
            int val=pow(rem,3);
            new_number+=val;
            n=n/10;
        }
        if(new_number==actual_number)
        return "Yes";
        else
        return "No";
    }
};
