#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long int principle,time,interest;
    float rate;
    double a;   
  cout<<"enter the principle amount"<<endl;
  cin>> principle;
  cout<<"enter the rate "<<endl;
  cin>> rate;
  cout<<"enter the time "<<endl;
  cin>>time;
  cout<<"principle amount = "<<principle<<endl;
  cout<<"rate you entered "<<rate<<endl;
  cout<<"time you entered "<<time<< " years "<<endl;
  a = principle * ((pow((1 + rate / 100), time)));
 // a=(principle*(1+rate/time)time);
  interest= a-principle;
  cout<<"compund interest is :"<<interest<<endl;

}