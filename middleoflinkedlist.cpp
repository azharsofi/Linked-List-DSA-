class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp;
        temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        n=(n/2)+1;
int i=0;
while(head!=NULL){
    i++;
    if(i==n)
    return head;
    head=head->next;
}

return head;
        
    }
};
