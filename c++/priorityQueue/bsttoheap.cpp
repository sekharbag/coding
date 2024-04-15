#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node * a,int b,int n)
    {
    if(a==NULL) return;// base case
       if(b==n){
    cout<<a->val<<" ";//work
    return;
       }
    display(a->left,b+1,n); //call 1    
    display(a->right,b+1,n);//call2
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
void creatingheap(Node * root,vector<int>&v,int& i){
    if(root==NULL) return ;
     root->val=v[i++];
       creatingheap(root->left,v,i);
       creatingheap(root->right,v,i);
}
void inorder(Node * root,vector<int>&v){
    if(root==NULL) return ;
    inorder(root->right,v);
    v.push_back(root->val);
    inorder(root->left,v);
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(5);
    Node *c = new Node(16);
    Node *d = new Node(1);
    Node *e = new Node(8);
    Node *f = new Node(12);
    Node *g = new Node(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    vector<int>v;
    inorder(a,v);
    levelordertraversal(a);
    int i=0;
    creatingheap(a,v,i);
    cout<<endl;
      levelordertraversal(a);
}