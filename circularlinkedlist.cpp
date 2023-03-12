bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)
   return true;
   Node *p=head;
   while(p->next!=head){
       p=p->next;
       if(p==NULL)
        break;
   }
   if(p==NULL)
   return false;
   else
   return true;
}
