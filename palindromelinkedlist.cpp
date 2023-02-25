/**
 * Definition for singly-linked list.
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

    bool isPalindrome(ListNode* head) {
           if (head == NULL || head->next == NULL) {
            return true; // An empty list or a single-element list is always a palindrome
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (fast != NULL) {
            slow = slow->next; // In odd-length lists, ignore the middle element
        }
        
        // Reverse the second half of the list
        ListNode* prev = NULL;
        ListNode* current = slow;
        while (current != NULL) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        // Compare the first half of the list with the reversed second half
        while (prev != NULL) {
            if (head->val != prev->val) {
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
        
        return true;
    }
}
