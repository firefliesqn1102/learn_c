#include <iostream>
using namespace std;
  
struct Geeks {
    short i;
    float f;
    
    char s;
};
  
int main()
{
  
    cout << "alignment of Geeks : " << alignof(Geeks) << '\n';
    cout << "sizeof of Geeks : " << sizeof(Geeks) << '\n';
    cout << "alignment of int : " << alignof(int) << '\n';
    cout << "sizeof of int     : " << sizeof(int) << '\n';
    
}
