Node* insertInMiddle(Node* head, int x)
{  Node* q= new Node(x);
         Node *s=head;
    Node *f=head->next;
    while(f!=NULL&&f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    q->next=s->next;
    s->next=q;
    return head;
        
                                 
}
