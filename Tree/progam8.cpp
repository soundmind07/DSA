problem link:-
  https://leetcode.com/problems/balanced-binary-tree/
code:-
  /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root)
    {
        if(root==nullptr)
        return 0;

        int lh=solve(root->left);
        int rh=solve(root->right);
        if(lh==-1 or rh==-1 or abs(lh-rh)>1) 
        return -1;
        else
        return 1+max(lh,rh);


    }
    bool isBalanced(TreeNode* root) {
        int val=solve(root);
        if(val!=-1)
        return true;
        else
        return false;
    }
};
