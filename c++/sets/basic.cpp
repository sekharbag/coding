#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main()
{
     unordered_set<string>s1;
     s1.insert("ac");
     s1.insert("ac");
      for(string ele : s1)
    {
       cout<<ele<<" ";
    }
    cout<<endl;
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
   // s.erase(5);
   int target=10;
   // s.find () -----> searches in set and if not found retur s.end()
   // which is iterator next to the last value in set
   if(s.find(target)!=s.end()){
    //target exist
     cout<<"exists";
   }
   else cout<<"does not";
   cout<<endl;
    //for each lopp
    for(int ele : s)
    {
       cout<<ele;
    }
    

}
