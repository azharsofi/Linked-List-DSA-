int intersectPoint(Node* head1, Node* head2)
{
    int l1 = 0,l2=0;
       Node* a= head1;
      Node* b= head2;

    while (a!= NULL) {
      l1++;
      a = a->next;
    }

    while (b != NULL) {
      l2++;
      b = b->next;
    }

a=head1;
b=head2;
        if(l1>l2){
    for(int i=0;i<abs(l1-l2);i++)
        a=a->next;}
        else{
            for(int i=0;i<abs(l1-l2);i++)
                b=b->next;
        }
 
                while(a!=b){
                    a=a->next;
                    b=b->next;
                }
                
       if(a) return a->data;
       return -1;

}
