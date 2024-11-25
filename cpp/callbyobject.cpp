#include <iostream>
using namespace std;

class complex {
private:
    int a,b;
public:
    void set_data(int ,int );
    void get_data();
    complex add(complex);
};
void complex:: set_data(int x,int y)
{
     a=x;
     b=y;
}
void complex:: get_data()
{
    cout<<"a= "<<a<<endl<<"b="<<b<<endl;
}
complex complex:: add(complex c )
{
    complex temp;
    temp.a=a + c.a;
    temp.b=b + c.b;
    return temp;
         
}
int main()
{
complex num1 ,num2,num3;
num1.set_data(5,6);
num2.set_data(8,9);
num1.get_data();
num2.get_data();
num3=num1.add(num2);
num3.get_data();


return 0;
}





