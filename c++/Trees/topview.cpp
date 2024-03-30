#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;
unordered_map<int,int>mp;
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
    void display(Node * a,int b,int n,int c)
    {
    if(a==NULL) return;// base case
       if(b==n){
      bool flag=false;
     for(auto ele :mp)
     {
        if(mp[ele.first]==c){
        flag=true;
        break;
        }
     }
     if(flag==false)
     mp[a->val]=c;
       }
    display(a->left,b+1,n,c-1);//call2
    display(a->right,b+1,n,c+1); //call 1    

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
        display(a,1,i,0);
        cout<<endl;
       }
    }
    void printtopview(Node *root)
    {
        if(root==NULL) return;
        printtopview(root->left);
        if(mp.find(root->val)!=mp.end())
        cout<<root->val<<" ";
        printtopview(root->right);
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
        Node* h=new Node(8);
        a->left=b;
        a->right=c;
        b->left=d;
        b->right=e;
        e->left=g;
        e->right=h;
        c->right=f;
       levelordertraversal(a);
        printtopview(a);
        cout<<endl;
   
    }