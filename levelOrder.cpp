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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return result;
        queue<TreeNode*> q;
        q.push(root);
        int cnt=1;
        while(!q.empty()){
            vector<int>sub;
            int tmp=0;
            for(int i=0;i<cnt;i++){
                TreeNode* head=q.front();
                sub.push_back(head->val);
                if(head->left){
                    q.push(head->left);
                    tmp++;
                }
             if(head->right){
                    q.push(head->right);
                    tmp++;
                }
            q.pop();
            }
            result.push_back(sub);
            cnt=tmp;
        }
        return result;
        
    
    }
private:
    vector<vector<int>> result;
};