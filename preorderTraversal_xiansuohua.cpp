class Solution {
public:	
	vector<int> preorderTraversal(TreeNode *root) {
	vector<int> result;
	TreeNode *cur;
	cur = root;
	while (cur != nullptr) {
	if (cur->left == nullptr) {
	result.push_back(cur->val);
	cur = cur->right;
	} else {
/* 查找前驱*/
	TreeNode *node = cur->left;
	while (node->right != nullptr && node->right != cur)
	node = node->right;
	if (node->right == nullptr) { /* 还没线索化，则建立线索*/
	result.push_back(cur->val); /* 仅这一行的位置与中序不同*/
	node->right = cur;
	cur = cur->left;
	} 
	else { /* 已经线索化，则删除线索*/
	node->right = nullptr;
	cur = cur->right;
	}
	}
	}
	return result;
	}
};