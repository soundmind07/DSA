Problem Link:
https://leetcode.com/problems/plus-one/description/

Code:-
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>outp;
        int carry=1;
        for(int i=n-1;i>=0;i--)
        {
            int n=digits[i]+carry;
            int val=n%10;
            carry=n/10;
            outp.push_back(val);

        }
        if(carry==1)
        outp.push_back(1);
        reverse(outp.begin(),outp.end());
        return outp;
    }
};
