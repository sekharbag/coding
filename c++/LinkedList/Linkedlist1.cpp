#include<iostream>
using namespace std;
class Student
{
public:
string name;
float marks;
float percentage;
 Student(string name,float marks,float percentage)
{
this->marks=marks;
this->name=name;
this->percentage=percentage;
}
};
void Change(Student *s)
{
s->name="Harsh";
}
int main()
{
Student* s=new Student("raghav",13,92.6);
// Student *ptr=&s;
// cout<<s.name<<endl;
// // //(*ptr).name="Harsh";
// // ptr->name="Harsh";
// Change(&s);
// cout<<s.name<<endl;
cout<<s->name<<endl;
Change(s);
cout<<s->name<<endl;
}