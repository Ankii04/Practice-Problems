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
    TreeNode* build(vector<int>& nums, int left, int right) {
        if(left > right)
            return NULL;

        // int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[left]);
        int i;
        for(i=left+1;i<=right;i++)
        {
            if(nums[i]>root->val)
            {
                break;
            }
        }
        root->left = build(nums, left+1, i- 1);
        root->right = build(nums, i, right);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder)  {
        return build(preorder, 0, preorder.size() - 1);
    }
};
