problem link:-
  https://leetcode.com/problems/spiral-matrix/description/
Code:-
  class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0,left=0,right=m-1,bottom=n-1;
        vector<int>ans;
        while(left<=right and top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom)   // added if there is single row present to avoid backwards traversing
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                    
                }
                bottom--;
            }
            if(left<=right)   // added if there is single column present to avoid upwards traversing.
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
