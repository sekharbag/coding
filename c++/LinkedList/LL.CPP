#include<iostream>
using namespace std;
class Node {//LL NODE
//user defined datatype
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{//user deinfed data strature
public:
Node* head;
Node* tail;
int size;
LinkedList(){
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
        tail=temp;
    }
    size++;
}
void display(){
    Node *t=head;
    while(t!=NULL)
    {
        cout<<t->val<<" ";
        t= t->next;
    }
    cout<<endl;
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
        head=head->next;
    size--;
    return;}
    if(size==1)
    {
        head=tail=NULL;
        size--;
        return;
    }
}
void deleteatTail()
{
    Node *temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
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
    temp->next=temp->next->next;
    size--;
}
}
};
int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtIndex(130,3);
    ll.deleteathead();
    ll.deleteatTail();
    ll.display();
    cout<<ll.size<<endl;
}