// 反转链表.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	//ListNode(int x) : val(x), next(NULL) {}
};


ListNode* createList(int *arr, int n) {

	ListNode* head = new ListNode();
	ListNode* pnode = head;
	for (int i = 0; i < n; i++) {
		pnode->val = arr[i];
		cout << arr[i]<<endl;
		if (i == n - 1)
			break;
		ListNode* nextnode = new ListNode();
		pnode->next = nextnode;
		pnode = nextnode;

	}
	pnode = NULL;

	return head;
}


ListNode* reservse(ListNode* head) {

	ListNode* new_node = NULL;

	while (head!=NULL) {
		ListNode* nextm = head->next;
		head->next = new_node;
		new_node = head;
		head = nextm;
	}
	return new_node;
	
}

void travering(ListNode* head) {
	while (head != NULL)
	{
		cout << head->val << ends;
		head = head->next;
	}
	cout << endl;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	ListNode* head = createList(arr, 5);
	travering(head);
	ListNode* node = reservse(head);
	travering(node);
	return 0;
}
