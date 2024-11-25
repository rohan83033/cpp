#include <iostream>
using namespace std;
int main()
{
    // reference variable
    float a = 3.22;
    long double b = 3.34;
    float &c = a;
    a = 1.3f;
    b = 2.32l;
    cout << "the value of a is :" << a << "\n the value of b is : " << b << endl;
    cout << c;
    // typecasting
    float e = 30.24 ;
    cout << "\nthe value of a is :" <<(int)e;
     
}  