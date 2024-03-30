#include<iostream>
#include<climits>
using namespace std;
int count=0;
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
 Node * lowestCommonAncestor(Node* root, int p, int q) {
       if(root->val==p || root->val==q) return root;
       else if(root->val<p && root->val>q) return root;
        else if(root->val>p && root->val<q) return root;
        else if(root->val>p && root->val>q)
          lowestCommonAncestor(root->left,p,q);
          else 
          lowestCommonAncestor(root->right,p,q);

    }    
   void distance(Node * root,int p)
   {
    if(root==NULL) return ;
     if(root->val==p) {
        return;
     }
    if(root->val>p){
        count++;
         distance(root->left,p);
    }
     else if(root->val<p){
        count++;
         distance(root->right,p);
    }


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
       // p is smaller 
       int p=20;
       //q is larger
       int q=60;
      Node * root = lowestCommonAncestor(a,p,q);
      Node *temp=root;
      distance(root,p);
      distance(temp,q);
    cout<<count<<endl;
}