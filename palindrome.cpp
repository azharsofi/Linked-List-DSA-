//using stack method
//first in first out method



#include <iostream>
#include <stack>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* current = head;
        while (current != NULL) {
            st.push(current->val);
            current = current->next;
        }
        current = head;
        while (current != NULL) {
            int top = st.top();
            st.pop();
            if (current->val != top) {
                return false;
            }
            current = current->next;
        }
        return true;
    }
};

int main() {
    // Example usage
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    
    Solution sol;
    if (sol.isPalindrome(head)) {
        cout << "The linked list is a palindrome" << endl;
    } else {
        cout << "The linked list is not a palindrome" << endl;
    }
    
    return 0;
}
