Problem Link:- 
https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1,mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            right=mid-1;
            else
            left=mid+1;
        }
        return -1;
    }
};
