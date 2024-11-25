#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "enter the 1st no:\n";
    cin >> a;
    cout << "enter the 2nd no:\n";
    cin >> b;

    // artimetic operator


    cout << "\n a + b is :" << a + b;
    cout << "\n a - b is :" << a - b;
    cout << "\n a * b is :" << a * b;
    cout << "\n a / b is :" << a / b;
    cout << "\n a % b is :" << a % b;
    cout << "\n a a++ is :" << a++;
    cout << "\n a a-- is :" << a--;
    cout << "\n a ++a is :" << ++a;
    cout << "\n a --a  is :" << --a;

    // assigment operator
    // a = 4s

    // comparision operator
    cout << "\n\n  a==b is " << (a==b);
    cout << "\n  a!=b is " << (a!=b);
    cout << "\n  a>=b is " << (a>=b);
    cout << "\n  a<=b is " << (a<=b);
    cout << "\n  a>b is " << (a>b);
    cout << "\n  a<b is " << (a<b);

    //logical operator
    // and op
    // or op
    // not op

    cout <<"\n\nvalue of ((a==b) && (a<b)) is :" << ((a==b) && (a<b));
    cout <<"\nvalue of ((a==b) || (a<b)) is " << ((a==b) || (a<b));
    cout <<"\nvalue of (!(a==b)) is " << (!(a==b));

    return 0;
}
