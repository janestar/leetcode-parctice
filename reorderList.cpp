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
    void reorderList(ListNode* head) {
    	if(head==nullptr||head->next==nullptr)  return; 
        ListNode* p1=head,*p2=head,*p3=nullptr;
        while(p2&&p2->next){
        	p3=p1;
        	p1=p1->next;
        	p2=p2->next->next;
        }
        p3->next=nullptr;
        ListNode* p4=head;
        ListNode* sub=reverse(p1);
        while(p4->next){
        	ListNode* tmp=p4->next;
        	p4->next=sub;
            sub=sub->next;
            p4->next->next=tmp;
            p4=tmp;
        }
        p4->next=sub;

             
    }
    ListNode* reverse(ListNode* head){
       if (head == nullptr || head->next == nullptr) return head;
       ListNode *prev = head;
       for (ListNode *curr = head->next, *next = curr->next; curr;
      prev = curr, curr = next, next = next ? next->next : nullptr) {
        curr->next = prev;
         }
       head->next = nullptr;
       return prev;
    }



 
};