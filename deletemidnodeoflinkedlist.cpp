class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
        return NULL;
          if(head->next==NULL)
        return NULL;

      ListNode*p=head;
      int n=0;
      while(p!=NULL){
          p=p->next;
          n++;
      }
      int x=(n/2)-1;
      p=head;
      while(x--){
          p=p->next;}

          p->next=p->next->next;
    
     return head;
    }
     
    
    };
