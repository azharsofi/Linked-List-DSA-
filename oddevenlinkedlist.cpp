class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        return NULL;
        ListNode* o=head;
        ListNode* e=head->next;
        ListNode* eh=e;
        while(e!=NULL&&e->next!=NULL){
            o->next=o->next->next;
            o=o->next;
            e->next=e->next->next;
            e=e->next;

        }
        o->next=eh;
        return head;
        
    }
};
