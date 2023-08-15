#include <iostream>
#include <memory>
using namespace std; 
class Animal{
    int a[3] = {1,2,3};
    public:
    
    Animal(){}
    void sound(){cout << &a << endl;}
    int * geta(){
        int * x = a;
        return x;
    }

};
 
int main()
{
    Animal dog[5];
    cout << dog[0].geta()[16];
}
