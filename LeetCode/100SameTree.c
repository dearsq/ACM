/*************************************************************************
    > File Name: 100SameTree.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月28日 星期三 08时08分49秒
 ************************************************************************/

#include <stdio.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}
bool isSameTree(struct TreeNode* p ,struct TreeNode* q)
{
    //同时为空
    if(!p && !q)
        return true;
    //有一个为空，而另一个不为空
    if(!p || !q)
        return false;
    if(p->val != q->val)
    {
        return false;
    }
  
	return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}

