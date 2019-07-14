// 删除链表倒数第n个结点.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	//ListNode(int x) : val(x), next(NULL) {}
};


ListNode* createList(int *arr,int n) {
	
 	ListNode* head = new ListNode();
	ListNode* pnode = head;
	for (int i = 0; i < n; i++) {
		pnode->val = arr[i];
		ListNode* nextnode = new ListNode();
		pnode->next = nextnode;
		pnode = nextnode;
	}
	pnode->next = NULL;

	return head;
}


ListNode* removeNthFromEnd(ListNode* head, int n) {

	ListNode* node = head;

	int list_len = 0;
	while (node->next != NULL)
	{
		list_len++;
		node = node->next;
	}
	int m = list_len - n ;
	if (list_len == n)
	{
		head = head->next;
		return head;
	}
	node = head;
	ListNode* pre_node = NULL;
	while (m != 0 && node != NULL) {
		m--;
		pre_node = node;
		node = node->next;
	}
	if (node->next != NULL)
		pre_node->next = node->next;
	else
	{
		pre_node->next = NULL;
	}
	return head;
}

void travering(ListNode* head) {
	while (head->next != NULL)
	{
		cout << head->val << ends;
		head = head->next;
	}
	cout << endl;
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	ListNode* head = createList(arr,5);
	travering(head);
	ListNode* node = removeNthFromEnd(head, 3);
	travering(node);
    return 0;
}
