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
    void inorder(TreeNode* root,int k,vector<int>&v)
    {   
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,k,v);
        v.push_back(root->val);
        inorder(root->right,k,v);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        inorder(root,k,v);
        int start = 0, end = v.size()-1;
        while(start<end)
        {
            if(v[start]+v[end]==k)
            {
                return true;
            }
            else if(v[start]+v[end]>k)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return false;
    }
};