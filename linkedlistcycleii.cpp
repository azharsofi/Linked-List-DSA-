class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
           ListNode *f=head;
        ListNode *s=head;
        while(f!=NULL&&f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f){
                while(s!=head){
                    s=s->next;
                    head=head->next;
                }
                return s;
            }}
            return NULL;
    }
}
