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
private:
    bool helper(TreeNode* curr, TreeNode* max, TreeNode* min)
    {
        if(curr == NULL)
        {
            return true;
        }
        
        if(min != NULL && curr -> val <= min -> val)
        {
            return false;
        }
        
        if(max != NULL && curr -> val >= max -> val)
        {
            return false;
        }
        
        return helper(curr -> right, max, curr) && helper(curr -> left, curr, min);
    }
public:
    bool isValidBST(TreeNode* root) {
        return helper(root, NULL, NULL);
    }
};