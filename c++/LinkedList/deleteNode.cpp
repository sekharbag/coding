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
void display(Node * head)
{
while(head!=NULL)
{
    cout<<head->val<<" ";
    head=head->next;
}
cout<<endl;
}
void deleteatnode(Node *head,Node *del)
{
    while(head->next!=del)
    {
        head=head->next;
    }
    head->next=head->next->next;
}
void deleteatnode(Node *head,int val)
{
    while(head->next->val!=val)
    {
        head=head->next;
    }
    head->next=head->next->next;
}
int main()
{
Node * a=new Node(10);
Node * b=new Node(20);
Node * c=new Node(30);
Node * d=new Node(40);
Node * e=new Node(50);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
display(a);
deleteatnode(a,40);
display(a);
}