#include <iostream>
#include <string.h>
using namespace std;

struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    
    public:
    void input()
    {
        cout << "enter detail of books" << endl;
        cout << "first enter id" << endl;
        cin >> bookid;
        cout << "second title of book" << endl;
        cin.ignore();
        cin.getline(title, 20);
        cout << "third enter price" << endl;
        cin >> price;
        if(price<0)
        {
            price=-price;
        }
       
    }
    void display()
    {
        cout << "bookid is" << " " << bookid << endl;
        cout << "title is" << " " << title << endl;
        cout << "price is " << price;
    }
};

int main()
{ 
    book b;
    b.input();
    b.display();
    return 0;
}