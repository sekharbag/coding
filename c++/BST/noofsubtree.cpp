#include<iostream>
#include<climits>
using namespace std;
int count=0;
int count1=0;
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
    display(a->left);
        cout<<a->val<<" ";
    display(a->right);
    }
    bool countsubtree(Node *root,int u,int l)
    {
     if(root==NULL) return true ;
     if(root->val<l || root->val>u) return false;
    return countsubtree(root->left,u,l) && countsubtree(root->right,u,l);
    }
    void helper(Node * root,int u,int l)
    {
     if(root==NULL) return ;
     helper(root->left,u,l);
    if(countsubtree(root,u,l)==true) count++;
     helper(root->right,u,l);
    }
    //bottom up approch 
     bool countsubtree1(Node *root,int u,int l)
    {
     if(root==NULL) return true ; 
    bool  le=countsubtree1(root->left,u,l);
    bool  ri=countsubtree1(root->right,u,l);
    if(le&&ri && (root->val<=u && root->val>=l)) {
        count1++;
        return true;
    }
    else return false;
    }
     int main()
    {
        Node* a=new Node(40);
        Node* b=new Node(25);
        Node* c=new Node(50);
        Node* d=new Node(20);
        Node* e=new Node(30);
        Node* f=new Node(45);
        Node* g=new Node(60);
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        c->left=f;
        c->right=g;
        display(a);
        cout<<endl;
        int l=15;
        int u=54;
       helper(a,u,l);
       cout<<count;
       countsubtree1(a,u,l);
       cout<<endl;
       cout<<count1;
}