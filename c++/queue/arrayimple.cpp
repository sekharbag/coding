        #include<iostream>
        #include<queue>
        using namespace std;
        class Queue
        {
        public:
        int f;
        int b;
        int arr[5];
        Queue()
        {
        f=0;
        b=0; 
        }
        void push(int val)
        {
            int n=5;
            if(b>n-1)
            {
                cout<<"queue is full";
                return ;
            }
            arr[b]=val;
            b++;
        }
        void pop()
        {
            if(b-f==0){
                cout<<"size 0";
                return ;
            }
            f++;
        }
        int size(){
            return b-f;
        }
        int front()
        {
            if(b-f==0)
            {
                cout<<"not possible";
                return 0 ;
            }
            return arr[f];
        }
        int back()
        {
              if(b-f==0)
            {
                cout<<"not possible";
                return 0;
            }
            return arr[b-1];
        }
        void display()
        {
            for(int i=f;i<b;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
        };
        int main()
        {
        Queue q ;
        q.push(10);
         q.push(20);
        q.display();
        q.push(30);
        q.push(40);
        q.display();
        }