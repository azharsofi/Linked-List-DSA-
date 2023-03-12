Node* insertInMiddle(Node* head, int x)
{  int l=0;   
    Node* q= new Node(x);
    Node* p=head;
    while(p!=NULL){
        p=p->next;
        l++;
        }
        p=head;
     int m=(l-1)/2;
     for(int i=0;i<m;i++){
         p=p->next;
         }
         q->next=p->next;
         p->next=q;
         return head;
         
        
                                 
}
