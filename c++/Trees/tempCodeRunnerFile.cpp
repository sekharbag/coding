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
    // void display(Node * a)
    // {
    // if(a==NULL) return;// base case
    // display(a->left);
    // display(a->right);
    // cout<<a->val<<" ";
    // }

    void topview(Node *root,int n)
    {
     if(root==NULL) return;
     bool flag=false;
     for(auto ele :mp)
     {
        if(mp[ele.first]==n){
        flag=true;
        break;
        }
     }
     if(flag==false)
     mp[root->val]=n;
     topview(root->left,n-1);
     topview(root->right,n+1);
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
       // display(a);
        topview(a,0);
        for(auto ele:mp)
        {
            cout<<ele.first<<" : "<<ele.second<<endl;
        }
    }