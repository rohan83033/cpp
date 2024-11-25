#include <iostream>
using namespace std;

class item
{
    private :
    int a,b;
    public :
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    item greater(item obj)
    {
        if(a+b >obj.a+obj.b)
        {
            return *this ;
        }
        else
        {
        return obj;
        }
    }
    void showdata()
    {
        cout<<a<<"  "<<b;
    }
};

int main() 
{
    item x,y,z;
    x.setdata(10,20);
    y.setdata(10,11);
    z=x.greater(y);
    cout<< z;
    return 0;
}