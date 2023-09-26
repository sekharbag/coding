#include<iostream>
using namespace std;
class Node {//LL NODE
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void display_recursive(Node * head)
{
if(head==NULL) return;
cout<<head->val<<" ";
display_recursive(head->next);

}


int main(){
Node * a=new Node(10);
Node * b=new Node(20);
Node * c=new Node(30);
Node * d=new Node(40);
Node * e=new Node(50);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
display_recursive(a);
}