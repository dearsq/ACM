/*************************************************************************
    > File Name: 404SumofLeftLeaves.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月27日 星期二 09时08分02秒
 ************************************************************************/

#include <stdio.h>

int sum = 0;
struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};


int DFS(struct TreeNode* root, int left)
{
	if(root == NULL)
		return 0;
	if( !root->left && !root->right)
		return left ? (*root).val : 0;
	return DFS(root->left,1)+DFS(root->right,0);
}

int SumOfLeftLeaves(struct TreeNode* root)
{
	return DFS(root, 0);
}


int main(){
	struct TreeNode root1;
	struct TreeNode root11;
	struct TreeNode root12;
	struct TreeNode root121;
	struct TreeNode root122;
	
	root1.val = 3;
	root11.val = 9;
	root12.val = 20;
	root121.val = 15;
	root122.val = 7;
	root1.left = &root11;
	root1.right = &root12;
	root11.left = NULL;
	root11.right = NULL;
	root12.left = &root121;
	root12.right = &root122;
	root121.left = NULL;
	root121.right = NULL;
	root122.left = NULL;
	root122.right = NULL;

	printf("%d\n",SumOfLeftLeaves(&root1));
    return 0;

}
