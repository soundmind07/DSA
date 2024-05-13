Problem Link:
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

Code:-
class Solution {
public:
    int find_first_position(vector<int>& nums, int n, int target)
    {
        int ans=-1;
        int start=0,end=n-1,mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]<target)
            start=mid+1;
            else if(nums[mid]>target)
            end=mid-1;
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
    int find_last_position(vector<int>& nums, int n, int target)
    {
        int ans=-1;
        int start=0,end=n-1,mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(nums[mid]<target)
            start=mid+1;
            else if(nums[mid]>target)
            end=mid-1;
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
        int first=find_first_position(nums,n,target);
        if(first==-1)
        return {-1,-1};
        int last=find_last_position(nums,n,target);
        return {first,last};
    }
};
