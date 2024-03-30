#include<iostream>
#include<climits>
using namespace std;
int max_level=INT_MIN;
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
    void display(Node * a)
    {
    if(a==NULL) return;
    cout<<a->val<<" ";
    display(a->left);
    display(a->right);
    }
    int sum(Node * a)
    {
     if(a==NULL) return 0;
     return a->val+sum(a->left)+sum(a->right);
    }
    int size(Node * a){
    if(a==NULL) return 0;
     return 1+size(a->left)+size(a->right);
    }
    int maxvalue(Node *a)
    {
        if(a==NULL) return INT_MIN;
        int nodemax=max(maxvalue(a->left),maxvalue(a->right));
         return max(a->val,nodemax);
    }
     int Prod(Node * a)
    {
     if(a==NULL) return 1;
     return a->val*Prod(a->left)*Prod(a->right);
    }
    int levels(Node *a)
    {
        if(a==NULL) return 0;
        return 1+max(levels(a->left),levels(a->right));
    }
    int findminvalue(Node * a)
    {
        if(a==NULL) return INT_MAX;
        return min(a->val,min(findminvalue(a->left),findminvalue(a->right)));
    }   
     int main()
    {
        Node* a=new Node(1);
        Node* b=new Node(2);
        Node* c=new Node(3);
        Node* d=new Node(2);
        Node* e=new Node(5);
        Node* f=new Node(6);
        Node* g=new Node(7);
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g;
        display(a);
        cout<<endl;
         cout<<sum(a);
         cout<<endl;
         cout<<size(a);
        cout<<endl;
        cout<<maxvalue(a);
          cout<<endl;
          cout<<Prod(a);
         cout<<endl;
          cout<<levels(a);
          cout<<endl;
          cout<<findminvalue(a);
    }