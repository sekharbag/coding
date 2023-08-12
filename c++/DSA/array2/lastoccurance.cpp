#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>v;
int y;
cout<<"enter your values";
cin>>y;
cout<<"enter your values";
for (int  i = 0; i < 4; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
for (int  i = 0; i < 4; i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
int last_index=0;
// for(int i=0;i<4;i++){
//     if(v[i]==y){
//         last_index=i;
//     }
// }
for(int i=3;i>=0;i--){
    if(v[i]==y)
    {
        last_index=i;
        break;
    }
}
cout<<last_index;

}
