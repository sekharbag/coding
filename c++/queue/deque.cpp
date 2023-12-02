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
class Queue{
//user deinfed data strature
public:
Node* head;
Node* tail;
int size;
Queue(){
    head=tail=NULL;
    size=0;
}
void PushAtEnd(int val)
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

void insertstart(int val)
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


void deletefromstart()
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
void deleteatLast()
{
    Node *temp= tail->prev;
    temp->next=NULL;
    tail=temp;
    size--;
}

void display()
{
    Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<" ";
    temp=temp->next;
}
cout<<endl;
}
};

int main()
{
    Queue q;
    q.insertstart(10);
    q.display();
    q.insertstart(20);
    q.display();
    q.PushAtEnd(30);
    q.display();
    q.deleteatLast();
    q.display();
    q.deletefromstart();
    q.display();
}