// 翻转链表II.cpp : 定义控制台应用程序的入口点。
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
		cout << arr[i] << endl;
		if (i == n - 1)
			break;
		ListNode* nextnode = new ListNode();
		pnode->next = nextnode;
		pnode = nextnode;

	}
	pnode = NULL;

	return head;
}


ListNode* reservse(ListNode* head,int m,int n) {


	ListNode* first_node=head;
	ListNode* pre_node = NULL;
	int len = n - m + 1;
	while (--m && head!=NULL) {

		pre_node = head;
		head = head->next;
	}
	ListNode* modify_node = head;
	ListNode* new_node = NULL;
	while (len&&head != NULL)
	{
		ListNode* next_node = head->next;
		head->next = new_node;
		new_node = head;
		head = next_node;
		len--;

	}
	modify_node->next = head;
	if (pre_node) {
		pre_node->next = new_node;
	}
	else
		first_node = new_node;

	return first_node;

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
	int arr[8] = {1,2,3,4,5,6,7,8 };
	ListNode* head = createList(arr, 8);
	travering(head);
	ListNode* node = reservse(head,3,6);
	travering(node);
	return 0;
}
