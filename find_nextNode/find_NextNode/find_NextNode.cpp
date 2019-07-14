// rebuilt_binary_tree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#define len  8
using namespace std;
struct BinaryTreeNode {
	int m_Value;
	BinaryTreeNode* m_Left;
	BinaryTreeNode* m_Right;
	BinaryTreeNode* m_parent;
};
int preOrder[len] = { 1,2,4,7,3,5,6,8 };
int inOrder[len] = { 4,7,2,1,5,3,8,6 };

BinaryTreeNode* ConstructCore(int* preStartorder, int* preEndorder, int* inStartorder, int* inEndorder);

BinaryTreeNode* construct(int *preorder, int* inorder, int length)
{
	if (preorder == nullptr || inorder == nullptr || length <= 0)
		return nullptr;
	return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
}

BinaryTreeNode* ConstructCore(int* preStartorder, int* preEndorder, int* inStartorder, int* inEndorder)
{
	int rootValue = preStartorder[0];
	BinaryTreeNode *root = new BinaryTreeNode();
	root->m_Value = rootValue;
	root->m_Left = root->m_Right = nullptr;
	if (preStartorder == preEndorder)
	{
		if (inStartorder == inEndorder && *preStartorder == *inStartorder)
			return root;
		else
			cout << "Input Error!" << endl;
	}

	int *tempnode = inStartorder;
	while (tempnode <= inEndorder && rootValue != *tempnode)
		tempnode++;
	if (tempnode == inEndorder && rootValue != *tempnode)
		cout << "Input Error" << endl;
	int leftLength = tempnode - inStartorder;
	int* leftEndorder = preStartorder + leftLength;
	if (leftLength > 0)
	{
		root->m_Left = ConstructCore(preStartorder + 1, leftEndorder, inStartorder, tempnode - 1);
	}
	if (leftLength < preEndorder - preStartorder)
	{
		root->m_Right = ConstructCore(leftEndorder + 1, preEndorder, tempnode + 1, inEndorder);
	}
	return root;
}

BinaryTreeNode* viewTree(BinaryTreeNode* node)
{
	if (node == nullptr)
		return nullptr;
	else
	{

		cout << node->m_Value << " " << ends;
		if (node->m_Left != nullptr)
		{
			viewTree(node->m_Left);
		}

		if (node->m_Right != nullptr)
		{
			viewTree(node->m_Right);
		}

	}
	return node;
}

BinaryTreeNode* GetNextNode(BinaryTreeNode* node)
{
	if (node == nullptr)
		return nullptr;
	BinaryTreeNode *next = nullptr;
	if (node->m_Right != nullptr)
	{
		BinaryTreeNode* rightNode = node->m_Right;
		while (rightNode->m_Left != nullptr)
			rightNode = rightNode->m_Left;
		next = rightNode;
	}
	else if(node->m_parent != nullptr){
		BinaryTreeNode* pCurrent = node;
		BinaryTreeNode* pPerant = pCurrent->m_parent;
		while (pPerant!=nullptr && pCurrent==pPerant->m_Right)
		{
			pCurrent = pPerant;
			pPerant = pPerant->m_parent;
		}
		next = pPerant;//左节点的情况
	}
	return next;
	}

int main()
{
	BinaryTreeNode* node;
	node = construct(preOrder, inOrder, len);
	viewTree(node);
	return 0;
}