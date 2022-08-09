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
    int count = 0;
    void traverse(TreeNode* node, int maxP)
    {
        if(node == NULL)
        {
            return;
        }
    
        if(node-> val >= maxP)
        {
            count ++;
        }
    
        maxP = max(maxP, node -> val);
        traverse(node -> left, maxP);
        traverse(node -> right, maxP);

}
public:
    int goodNodes(TreeNode* root) {
        traverse(root, root -> val);
        return count;

    }
};