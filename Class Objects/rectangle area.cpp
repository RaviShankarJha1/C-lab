
#include <iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    
    void Area(int length, int breadth)
    {
        int aea;
        aea=length*breadth;
        cout<<"Area: "<<aea<<endl;
    }
};

int main() {
    rectangle r1;
    r1.length=2;
    r1.breadth=12500;
    r1.Area(r1.length,r1.breadth);
    return 0;
}
