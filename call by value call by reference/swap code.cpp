#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int swap;
    swap=x;
    x=y;
    y=swap;
    cout<<"Value of B inside of function: "<<y<<endl;
    cout<<"Value of A inside of function: "<<x<<endl;
}

int main() {
    int a=5, b=2;
    swap(a,b);
    cout<<"Value of B outside of function: "<<b<<endl;
    cout<<"Value of A outside of function: "<<a<<endl;
    
    

    return 0;
}
