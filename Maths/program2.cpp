Problem Link:-
https://www.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1

Code: time complexity is ((M-N+1)*sqrt(K))
class Solution {
  public:
    int solve(int num)
    {
        if(num==1)
        return 0;
        
        if(num==2 or num==3)
        return 1;
        
        if(num%2==0 or num%3==0)
        return 0;
        
        
        for(int i=5;i<=sqrt(num);i+=6)
        {
            if((num%i==0) or(num%(i+2)==0))
            return 0;
        }
        return 1;
    }
    vector<int> primeRange(int M, int N) {
        
        vector<int>ans;
        for(int i=M;i<=N;i++)
        {
            int val=solve(i);
            if(val==1)
            ans.push_back(i);
        }
        return ans;
    }
};
