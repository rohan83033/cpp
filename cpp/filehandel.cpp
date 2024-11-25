#include<iostream>
#include <fstream>
using namespace std;

void writing()
{
    ofstream fout;
    fout.open("file.txt",ios::out);
    char a[]="my name is rohan srivastava";
    fout<<a<<endl;
    fout.close();
}
void reading()
{
    ifstream fin;
    char ch;
    fin.open("file.txt",ios::in);
    if(!fin)
    {
    cout<<"file not exist";
    }
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();

}
void append(char data[])
{
    ofstream fout;
    fout.open("file.txt",ios::app);
    fout<<data;
    fout.close();
}
int main()
{
    writing();
  char str[]="file handeling";
  append(str);
  cout<<endl;
  reading();
  cout<<endl;
  return 0;
}