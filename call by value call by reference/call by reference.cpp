#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}

int main() {
    int x=500, y=100;
    swap(x,y);
    cout<<"Value of X outside of function: "<<x<<endl;
    cout<<"Value of Y outside of function: "<<y<<endl;
    
    

    return 0;
}
