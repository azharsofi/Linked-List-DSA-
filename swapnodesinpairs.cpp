class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode();
        
        dummy->next=head;
         ListNode* p=dummy;
         while(p->next!=NULL&&p->next->next!=NULL){
             ListNode* s1=p->next;
                   ListNode* s2=p->next->next;
                   s1->next=s2->next;
                   s2->next=s1;
                   p->next=s2;
                   p=s1;

         }
         return dummy->next;
    }
};
