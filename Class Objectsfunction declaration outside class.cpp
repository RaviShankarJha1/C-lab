#include <iostream>
using namespace std;
class Cube{
    public:
    int l;
    int b;
    int h;
    
    void volume();
    
};
void Cube::volume()
    {
        int vol;
        vol=l*b*h;
        cout<<"Volume: "<<vol<<endl;
    }
int main(){
    Cube c1;
    c1.l = 15;
    c1.b=14;
    c1.h=17;
    
    c1.volume();
    
    return 0;
}
