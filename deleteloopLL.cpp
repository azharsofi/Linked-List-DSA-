class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
         if (head == NULL || head->next == NULL) {
            return; // no loop possible
        }

        Node* slow = head;
        Node* fast = head;

        // Find the meeting point of the two pointers
        while (fast != NULL && fast->next !=NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                break;
            }
        }

        // If there's no loop, return
        if (slow != fast) {
            return ;
        }
        if(slow==head){//exception
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;
        }
        // Move one pointer to the beginning of the list
        else if(slow==fast){
        while (head->next != fast->next) {
            head= head->next;
            fast = fast->next;
        }

        // Set the next pointer of the last node in the loop to nullptr
        fast->next=NULL;
    }}
};
