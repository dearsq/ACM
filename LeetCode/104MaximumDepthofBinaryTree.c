/*************************************************************************
    > File Name: 104MaximumDepthofBinaryTree.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月21日 星期三 11时45分15秒

	104.  Maximum Depth of Binary Tree

	Given a binary tree, find its maximum depth.
	The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
 ************************************************************************/

#include <stdio.h>
#include <assert.h>

typedef struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

int maxDepth(struct TreeNode* root){
	int maxl = 0;
	int maxr = 0;
	if(!root)
		return 0;
	if(!root->left && !root->right){
		return 1;
	}
	maxl = maxDepth(root->left);
	maxr = maxDepth(root->right);
	return maxl > maxr ? maxl+1 : maxr+1;
}

int main(){
	int result;
	struct TreeNode root;
	struct TreeNode root_sonl;
	struct TreeNode root_sonr;

	root.val = 999;
	root.left = &root_sonl;
	root.right = &root_sonr;

	root_sonl.val = 888;
	root_sonr.val = 888;
	//以下节点 不初始化会出现段错误！
	root_sonl.left = NULL;
	root_sonr.left = NULL;
	root_sonl.right = NULL;
	root_sonr.right = NULL;
	
	result = maxDepth(&root);
	printf("%d \n",result);

    return 0;
}
