#include<iostream>
#include<vector>
using namespace std;
 
class MaxHeap{
    vector<int>hp;
        public :
        void unheapify(int ci)
        {
            while(ci>0)
            {
                int pi=(ci-1)/2;
                if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
                }
                else break;
            }
        }
    void push(int ele)
    {
        hp.push_back(ele);
        unheapify(hp.size()-1);
    }
    bool empty(){
        return hp.size()==0;
    }
    void display()
    {
        for(int i=0;i<hp.size();i++) cout<<hp[i]<<" ";
    }
    int peek(){
        return hp[0];
    }
    void downhipify(int idx)
    {
        while(idx<hp.size())
        {
            int l=hp[2*idx+1];
            int r=hp[2*idx+2];
            if(l>=hp.size()) break;
            int maxele=idx;
            
        }
    }
    void pop()
    {
        if(hp.size()==0) return ;
        hp.pop_back();
        downhipify(0);
    }
};
int main()
{
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    

}

