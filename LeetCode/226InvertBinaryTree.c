/*************************************************************************
    > File Name: 226InvertBinaryTree.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月22日 星期四 08时40分47秒

	226. Invert Binary Tree
Invert a binary tree.

	     4
	   /   \
	  2     7
	 / \   / \
	1   3 6   9
to
        4
	  /   \
	 7     2
	/ \   / \
   9   6 3   1
 ************************************************************************/

#include <stdio.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root){

	struct TreeNode* pTempNode;
	if(root == NULL){
		return NULL;
	}
	pTempNode = root->left;

	root->left = invertTree(root->right);
	root->right = invertTree(pTempNode);
	return root;
}

int main(){
	struct TreeNode root;
	struct TreeNode root_left;
	struct TreeNode root_right;

	root.val = 1000;
	root_left.val = 100;
	root_right.val = 100;

	root_left.left = NULL;
	root_left.right = NULL;
	root_right.left = NULL;
	root_right.right = NULL;
	
	root.left = &root_left;
	root.right = &root_right;
	
	invertTree(&root);

    return 0;
}
