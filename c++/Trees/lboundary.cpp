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
    void printleft(Node *root)
    {
    if(root==NULL) return ;
    cout<<root->val<<" ";
    if(root->left!=NULL)
    printleft(root->left);
    else
    printleft(root->right);
    }
    void printright(Node *root)
    {
    if(root==NULL) return ;
    if(root->right!=NULL)
    printright(root->right);
    else
    printright(root->left);
        cout<<root->val<<" ";

    }
    void printleafnode(Node *root)
    {
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL)
    cout<<root->val<<" ";
   printleafnode(root->left);
   printleafnode(root->right);
    }
    int main()
    {
      int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
      int N = sizeof(arr) / sizeof(arr[0]); 
      queue<Node*>q;
      Node*temp=new Node(arr[0]);
      q.push(temp);
      int i=1;
      while(i<N-1)
      {
        if(arr[i]!=INT_MIN)
        {
         q.front()->left=new Node(arr[i]);
         q.push(q.front()->left); 
        }
        i++;
        if(arr[i]!=INT_MIN)
        {
         q.front()->right=new Node(arr[i]);
         q.push(q.front()->right); 
        }
      i++;
      q.pop();
        }
   levelordertraversal(temp);
   cout<<endl<<"#our left border"<<endl;
   printleft(temp);
   cout<<endl<<"#our right border"<<endl;
   printright(temp);
   cout<<endl<<"#our left nodes"<<endl;
   printleafnode(temp);
      }

   