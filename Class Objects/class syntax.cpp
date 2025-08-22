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
int main() {
    student s1;
    s1.name="ABC";
    s1.subject="C++";
    s1.branch="B";
    s1.result=8.6;
    
    cout<<s1.name<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.result<<endl;

    return 0;
}
