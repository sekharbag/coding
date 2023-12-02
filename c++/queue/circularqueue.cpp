        #include<iostream>
        #include<queue>
        using namespace std;
        class Queue
        {
        public:
        int f;
        int b;
        int s=0;
        int arr[5];
        Queue()
        {
        f=0;
        b=0; 
        s=0;
        }
        void push(int val)
        {
            int n=5;
            if(s==5)
            {
                cout<<"queue is full";
                return ;
            }
            arr[b]=val;
            b++;
            s++;
        }
        void pop()
        {
            if(s==0){
                cout<<"size 0";
                return ;
            }
            f++;
            s--;
        }
        int size(){
            return s;
        }
        int front()
        {
            if(s==0)
            {
                cout<<"not possible";
                return 0 ;
            }
            return arr[f];
        }
        int back()
        {
              if(s==0)
            {
                cout<<"not possible";
                return 0;
            }
            return arr[b-1];
        }
        void display()
        {
            
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