#include <iostream>
using namespace std;
class Car{
    public:
    string brand;
    int year;
};
int main(){
    Car C1;
    cout<<"Enter the Car brand: "<<endl;
    cin>>C1.brand;
    cout<<"Enter the manufacturing year: "<<endl;
    cin>>C1.year;
    cout<<"Brand: "<<C1.brand<<endl;
    cout<<"Manufacturing year: "<<C1.year<<endl;
    return 0;
}
