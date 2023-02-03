 Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        return NULL;
        ListNode* p=new ListNode(-1);
        p->next=head;
        ListNode*t=p;
        while(t!=NULL&&t->next!=NULL){
            if(t->next->val==val){
                ListNode*temp=t->next;
                t->next=temp->next;
                delete(temp);
            }
            else{
                t=t->next;
            }

        }

    
        return p->next;
        
    }
};
