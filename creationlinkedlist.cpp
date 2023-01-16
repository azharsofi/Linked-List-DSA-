
#include <iostream>

using namespace std;
typedef struct node{
    int d;
    struct node* nxt;
}N;

int main()
{ int i,n;
cout<<"enter no. of nodes"<<endl;
cin>>n;
cout<<"enter item"<<endl;
int it;
cin>>it;
N*p,*q,*head;
p=(N*) malloc(sizeof(N));
p->d=it;
p->nxt=NULL;
head=p;
q=p;
for(int i=1;i<n;i++){
    cout<<"enter item"<<endl;
    cin>>it;

p=(N*) malloc(sizeof(N));
p->d=it;
p->nxt=NULL;
q->nxt=p;
q=q->nxt;

    
}
q=head;
while(q!=NULL){
    cout<<q->d<<" ";
    q=q->nxt;
    
}
return 0;}


