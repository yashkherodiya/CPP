#include<iostream>
using namespace std;
class a{
    public:
    int age = 21;    
};
class b : virtual public a {
    public:
    string name = "Yash";
};
class c : virtual public a {
    public:
    string dept = "Computer Science";
};
class d : public b, public c {
    public:
    int salary = 10000;
public:
void show(){
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Department: "<<dept<<endl<<"Salary: "<<salary<<endl;
}
};
int main(){
    d demo;
    demo.name;
    demo.age;
    demo.dept;
    demo.salary;
    demo.show();
    return 0;
}
