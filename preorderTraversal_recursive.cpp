/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)return result;
        if(root)
          result.push_back(root->val);
        if(root->left)
          result=preorderTraversal(root->left);
        if(root->right)
          result=preorderTraversal(root->right);
        return result;
        
    }
private:
    vector<int>result;

};