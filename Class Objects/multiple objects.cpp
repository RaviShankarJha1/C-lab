
#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    string branch; 
    string subject;
    string year;
    float result;
};
class car
{
    public:
    string brand;
    string model;
    int year;
};
int main() {
    student s1;
    s1.name="ABC";
    s1.subject="C++";
    s1.branch="B";
    s1.result=8.6;
    
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"Subject: "<<s1.subject<<endl;
    cout<<"Result: "<<s1.result<<endl;
    cout<<'\n'<<endl;
    student s2;
    s2.name="AAAAAAAAAAAAAAAAAAAAAAAAAA";
    s2.subject="C#";
    s2.branch="A";
    s2.result=10.10101010101;
    
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Branch: "<<s2.branch<<endl;
    cout<<"Subject: "<<s2.subject<<endl;
    cout<<"Result: "<<s2.result<<endl;

    cout<<'\n'<<endl;
    
    
    car c1;
    c1.brand="Honda";
    c1.model="City";
    c1.year=2005;
    
    cout<<"Brand: "<<c1.brand<<endl;
    cout<<"Model: "<<c1.model<<endl;
    cout<<"Year: "<<c1.year<<endl;
    
    cout<<'\n'<<endl;
    
    car c2;
    c2.brand="Hon";
    c2.model="Ci";
    c2.year=205;
    
    cout<<"Brand: "<<c2.brand<<endl;
    cout<<"Model: "<<c2.model<<endl;
    cout<<"Year: "<<c2.year<<endl;
    
    
}
