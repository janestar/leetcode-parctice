/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
 ListNode* deleteDuplicates(ListNode* head) {
	 ListNode pre(INT_MIN);
	 pre.next=head;
	 ListNode* head2=head;
	 ListNode* pre2=&pre;
	 while(head2){
		 bool flag=false;
		 while(head2->next&&head2->val==head2->next->val){
			ListNode* tmp=head2;
			flag=true;
			head2=head2->next;
			delete tmp;

		 }
		 if(flag){
			 ListNode* tmp=head2;
			 head2=head2->next;
			 delete tmp;
			 continue;
		 }
		pre2->next=head2;
		pre2=pre2->next;
		head2=head2->next;

	 }
	 pre2->next=head2;
	 return pre.next;
	 
 }
};