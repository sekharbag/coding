#include<iostream>
#include<climits>
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
    void display(Node * a,int b,int n)
    {
    if(a==NULL) return;// base case
       if(b==n){
    cout<<a->val<<" ";//work
    return;
       }
    display(a->right,b+1,n); //call 1    
    display(a->left,b+1,n);//call2
    }
    int levels(Node *a)
    {
        if(a==NULL) return 0;
        return 1+max(levels(a->left),levels(a->right));
    }
    void levelordertraversal(Node * a)
    {
       int n=levels(a);
       for(int i=1;i<=n;i++)
       {
        display(a,1,i);
        cout<<endl;
       }
    }
     int main()
    {
        Node* a=new Node(1);
        Node* b=new Node(2);
        Node* c=new Node(3);
        Node* d=new Node(4);
        Node* e=new Node(5);
        Node* f=new Node(6);
        Node* g=new Node(7);
         Node* h=new Node(9);
          Node* i=new Node(10);
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g; 
        g->right=h;
        g->left=i;
         //display(a,1,2);
         cout<<endl;
        levelordertraversal(a);
    }