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

 ListNode* reverse(ListNode* head,ListNode* tail){
	 if(head==tail)return head;
	 ListNode* pre=nullptr;
	 pre=head;
	 head=head->next;
	 ListNode* ptr=reverse(head,tail);
	 head->next=pre;  
	 pre->next=nullptr;
	 return ptr;
 }
 
 ListNode* reverseBetween(ListNode* head, int m, int n) {
	 ListNode* subhead=head;
	 ListNode* subtail=head;
	 ListNode presub(-1);
	 presub.next = subhead;
	 ListNode* pre=&presub;
	 for(int i=1;i<m;i++){
		 subhead=subhead->next;
		 pre=pre->next;  
	 }
	 ListNode* presub2=subhead;
	 for(int i=1;i<n;i++)
		 subtail=subtail->next;
	 ListNode* tail=subtail->next;
	 ListNode* ptr=reverse(subhead,subtail);
	 pre->next=ptr;
	 presub2->next=tail;
	 if(m==1)return ptr;
	 else 
		 return head;

 }

};