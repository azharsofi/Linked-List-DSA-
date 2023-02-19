public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int l1 = 0;
       ListNode a= headA;
        ListNode b= headB;

    while (a!= null) {
      l1++;
      a = a.next;
    }
    int l2 = 0;

    while (b != null) {
      l2++;
      b = b.next;
    }

a=headA;
                while(l1>l2){
                l1--;
        a=a.next;}
b=headB;
 while(l1<l2){
                l2--;
                b=b.next;}
                while(a!=b){
                    a=a.next;
                    b=b.next;
                }
                
        return a;
    }
}
