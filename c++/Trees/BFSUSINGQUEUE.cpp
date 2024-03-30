#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class Node 
   {
        public:
        int val;
        Node *left;
        Node * right;
        Node(int val)
        {
           this->val=val;
           this->left=NULL;
           this->right=NULL; 
        }
    };
     int main()
    {
        Node* a=new Node(1);
        Node* b=new Node(2);
        Node* c=new Node(3);
        Node* d=new Node(4);
        Node* e=new Node(5);
        Node* f=new Node(6);
        Node* g=new Node(7);
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g; 
    queue<Node*>q;
    q.push(a);
    while(q.size()>0)
    {
        if(q.front()->left!=NULL)  q.push(q.front()->left);
        if(q.front()->right!=NULL) q.push(q.front()->right);
        cout<<q.front()->val<<endl;
        q.pop();
    }

    }