problem link:-
  https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

code:-
  class Solution {
public:
    int findMin(vector<int>& arr) {

       int s=0;
       int e=arr.size()-1;

       while(s<=e)
       {
          if(arr[s]<arr[e]) return arr[s];
          int mid=s+(e-s)/2;
          int pr=(mid+ arr.size()-1)%arr.size();
          int ne=(mid+1)%arr.size();

          if(arr[mid]<=arr[pr] && arr[mid]<=arr[ne])
             return arr[mid];

          else if(arr[mid]<arr[s])
          e=mid-1;

          else
          s=mid+1;
       }   
       return -1;
    }
};
