class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
      int t=del->data;
      del->data=del->next->data;
      del->next->data=t;
    
    del->next=del->next->next;
}
};
