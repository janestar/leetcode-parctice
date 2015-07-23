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
    vector<int> inorderTraversal(TreeNode* root) {
       stack<TreeNode*> s;
       TreeNode* p=root;
       if(!root)return result;
       while(!s.empty()||p!=nullptr){
         if(p){
             s.push(p);
             p=p->left;
         }
         else{
             TreeNode* tmp=s.top();
             s.pop();
             result.push_back(tmp->val);
             p=tmp->right;
           
         }
          
       }
       return result;  
        
    }
private:
   vector<int> result;
};