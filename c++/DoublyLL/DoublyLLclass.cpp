#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DLL{//user deinfed data strature
public:
Node* head;
Node* tail;
int size;
DLL(){
    head=tail=NULL;
    size=0;
}
void insertAtEnd(int val)
{
    Node * temp=new Node(val);
    if(size==0)
    {
        head=tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
}

void insertAtHead(int val)
{
    Node *temp=new Node(val);
    if(size==0)
    {
        head=tail=temp;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    size++;
}
void insertAtIndex(int val,int idx)
{
    if(idx==0){
    insertAtHead(val);
    return;
    }
    if(idx==size)
    {
        insertAtEnd(val);
        return ;
    }
else{
    Node *t=new Node(val);
    int count=0;
    Node *temp=head;
 while(count!=idx)
    {
        count++;
        temp=temp->next;
    }
t->next=temp;   
count=0;
temp=head; 
while(count!=idx-1)
    {
        count++;
        temp=temp->next;
    }
t->prev=temp;
t->next->prev=t;
temp->next=t;
size++;
}
}
int getAtIdx(int idx)
{
Node *temp=head;
int count=0;
while(count!=idx)
{
count++;
temp=temp->next;
}
return temp->val;
}
void deleteathead()
{
    if(size>1)
    {
     head->next->prev=NULL;
    head=head->next;
    size--;
    return;
    }
    if(size==1)
    {
        head=tail=NULL;
        size--;
        return;
    }
}
void deleteatTail()
{
    Node *temp= tail->prev;
    temp->next=NULL;
    tail=temp;
    size--;
}
void deleteatidx(int idx)
{
    if(idx==size-1){
    deleteatTail();
    return;
    }
if(idx==0)
{
    deleteathead();
    return;
}
else{
    Node *temp=head;
    for(int i=1;i<=idx-1;i++)
    {
        temp=temp->next;
    }
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    size--;
}
}
void display()
{
while(head!=NULL)
{
    cout<<head->val<<" ";
    head=head->next;
}
cout<<endl;
}
void display_rev()
{
    while(tail)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}
};

int main()
{
    
    DLL ll;
    ll.insertAtEnd(10);
     ll.insertAtEnd(50);
    ll.insertAtEnd(20);
    ll.insertAtHead(-10);
    ll.insertAtIndex(15,1);
     ll.deleteatidx(2);
    ll.display();
    ll.display_rev();
    cout<<11/3;
}