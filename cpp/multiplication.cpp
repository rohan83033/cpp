#include <iostream>
 using namespace std;
int main ()
 {
     int a,b;
    cout <<"enter the table you WANT" <<endl ;
    cin>>a;
    b=1;
    do 
    {
        cout <<a<<" * "<<b<<" = "<<a*b<<endl;
        b++;
    }
    while (b<=10);

 }