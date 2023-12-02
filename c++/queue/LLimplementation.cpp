        #include<iostream>
        using namespace std;
        class Node {
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
Node* head;
Node* tail;
int size;
Queue(){
    head=tail=NULL;
    size=0;
}
void Push(int val)
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
void pop()
{
    if(size==0)
    {
        cout<<"pop not possible";
        return ;
    }
    else{
        if(size==1){
        head=tail=NULL;
        return;
        }
     head=head->next;
    }
}
void front()
{
    if(size==0)
    {
        cout<<"size 0 cant show top";
        return ;
    }
    cout<<head->val;
}
void back()
{
    if(size==0)
    {
        cout<<"size 0 cant show top";
        return ;
    }
    cout<<tail->val;
}
void display()
{
    Node * temp=head;
    while(temp)
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
    q.Push(10);
    q.Push(20);
    q.Push(30);
     q.display();
     q.pop();
    q.Push(40);
    q.Push(50);
    q.pop();
    q.display();
    cout<<endl;
    q.front();
    cout<<endl;
    q.back();


}