// 合并K个链表.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using  namespace std;
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
	pnode->next= NULL;

	return head;
}

ListNode* mergeTwoList(ListNode* l1, ListNode*l2) {
	ListNode* new_node =new ListNode();
	ListNode* head = new_node;
	while(l1!=NULL&&l2!=NULL){
		if (l1->val > l2->val) {
			new_node->next= l2;
			l2 = l2->next;
			}
		else {
			new_node->next = l1;
			l1 = l1->next;
		}
		new_node = new_node->next;
	}
	if (l1==NULL) { 
		new_node = l2;
	}
	if (l2 == NULL) {
		new_node = l1;
	}
		return head;
}

ListNode* mergeKLists(std::vector<ListNode*>& lists) {
	size_t lists_size = lists.size();
	if (lists_size == 0)
		return NULL;
	if (lists_size == 1)
		return lists[0];
	if (lists_size == 2)
		return mergeTwoList(lists[0], lists[1]);
	size_t mid = lists_size / 2;
	std::vector<ListNode*> sub_lists1;
	std::vector<ListNode*> sub_lists2;
	for (size_t i = 1; i < mid; i++) {
		sub_lists1.push_back(lists[i]);
	}
	for (size_t i = mid; i < lists_size; i++) {
		sub_lists2.push_back(lists[i]);
	}
	ListNode* l1 = mergeKLists(sub_lists1);
	ListNode* l2 = mergeKLists(sub_lists2);
	return mergeTwoList(l1, l2);

}
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	ListNode* head1 = createList(arr1, 5);
	int arr2[5] = { 1,2,3,4,5 };
	ListNode* head2 = createList(arr1, 5);
	
	mergeTwoList(head1, head2);

    return 0;
}

