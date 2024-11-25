#include <iostream>
using namespace std;

class a
{
    int num, b;

public:
    void takedata(int, int);
    a operator-(a);
    void showdata();
};
void a::takedata(int x, int y)
{
    num = x;
    b = y;
}
a a ::operator-(a u)
{
    a temp;
    temp.num=num-u.num;
    temp.b=num-u.b;
    return temp;
}
void a ::showdata()
{
    cout << "num = " << num << endl
         << "b = " << b;
}
int main()
{
    a c1, c2, c3;
    c1.takedata(3,4);
    c2.takedata(5,6);
    c3=c1-c2;
    c3.showdata();
    return 0;
}