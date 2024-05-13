Problem Link:-
https://leetcode.com/problems/binary-tree-level-order-traversal/description/

Code:-
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr)
        return ans;
        if(root->left==nullptr and root->right==nullptr)
        return {{1}};
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int level=q.size();  // the size of queue will tell at which level u are
            vector<int>level_elements; // a vector to store all elements present at a particular level.
            for(int i=0;i<level;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
               
                if(curr->left!=nullptr)
                {
                    q.push(curr->left);
                }
                if(curr->right!=nullptr)
                {
                    q.push(curr->right);
                }
                 level_elements.push_back(curr->val);

            }
            ans.push_back(level_elements);

        }
        return ans;
    }
};
