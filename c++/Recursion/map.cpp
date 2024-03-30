#include <iostream>  
#include <map>  
using namespace std;  
  
int main ()  
{  
  map<char,int> mymap;  
  map<char,int>::iterator it;  
  mymap['a']=10;  
  mymap['b']=20;  
  mymap['c']=30;  
  mymap['d']=40;  
  char ch='a';
  for(auto ele :mymap)
  {
    cout<<ele.first<<" "<<ele.second<<endl;
  }
  mymap.erase(ch);
  for(auto ele :mymap)
  {
    cout<<ele.first<<" "<<ele.second<<endl;
  }

}