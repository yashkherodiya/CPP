#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
};
class rollNo : public person {
int roll_no;
public:
void input(){
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Roll Number: ";
    cin>>roll_no;
}
public:
void show(){
    cout<<"Name: "<<name<<endl<<"Roll Number: "<<roll_no<<endl;
}
};
int main(){
    rollNo r;
    r.input();
    r.show();
    return 0;
}
