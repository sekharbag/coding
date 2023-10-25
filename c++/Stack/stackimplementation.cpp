#include<iostream>
using namespace std;
class Stack
{
  public  :
 int arr[5];
 int idx;
 Stack(int idx){
    this->idx=idx;
 }

    void push(int val)
    {
    idx++;
    arr[idx]=val;
    }
    void pop(){
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size()
    {
        return idx+1;
    }
};
int main(){
    Stack st(-1);
    st.push(10);
    st.push(20);
    st.push(30);
    // st.pop();
    cout<<st.size();
    cout<<st.top();
}