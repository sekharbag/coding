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
    int main()
    {
      int arr[]={1,2,3,4,5,6,7};
      int N = sizeof(arr) / sizeof(arr[0]); 
      queue<Node*>q;
      Node*temp=new Node(arr[0]);
      q.push(temp);
      int i=1;
      while(i<N)
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
      }

   