#include <iostream>
using namespace std;
class a
{
    int b, c;

public:
    void display(int a, int b)
    {
        cout << a << " " << b << endl;
    }
};
class b
{
    int c, d;
    public:
    int cal(int a, int b)
    {
        return a*b;
    }
};
class c : public a
{
    int c, d;
};
class e : public a, public b
{
    public:
      int a,b;
};

int main()
{
    int i;
    a b1;
    c b3;
    e b4;
    b1.display(5, 7);
    b3.display(5, 7);
   i= b4.cal(5,6);
    cout<<i;
    return 0;
}