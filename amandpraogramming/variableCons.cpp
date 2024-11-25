#include <iostream>
using namespace std;

int main ()
{
    int a,b,maths ;
    cout<<"Enter your annual income:";
    cin>> a;

    cout <<"your annual income is "<<a;
    cout <<"\nif your income is under 7 lakh choose case  1";
    cout <<"\nif your income is under 10 lakh choose case 2";
    cout <<"\nif your income is under 12 lakh choose case 3";
    cout <<"\nif your income is under 15 lakh choose case 4";
    cout <<"\nif your income is more 15 lakh choose case  5";
     a-75000;
    cin >> maths;
    cout <<"\nyou choose the case : "<<maths;
    
    switch (maths)
    {
        
    case 1: 
        cout <<"\nif your income is under 7 lakh";
              if(a<=700000)
              {
                cout<<"\nNO TAX your are exempt from tax slab";
              }
              else{
                cout<<"\ninvalid input";
              }
        break;
    case 2:
         cout <<"\nif your income is under 10 lakh";
         if (a<1000000)
         {
            a=a-700000;
            a=a*10/100;
            cout <<"\nyou are going to pay tax of amount"<<a;
         }
         else{
            cout<<"invaid input";
         }
        
        break;
    case 3:
        cout <<"if your income is under 12 lakh";
         if (a<=1200000)
         {
            a=a-700000;
                     
            
            cout<<"\nyou are going to pay tax of amount "<<a;       
         }
         else
         {
          cout<<"invaid input";
         }
        break;    
    case 4:
         cout <<"if your income is under 15 lakh";
          if (a<=1500000)
         {
            a=a-700000;
            a=a*10/100;
            a=a*15/100;
            a=a*20/100;
            cout<<"\nyou are going to pay tax of amount "<<a;       
         }
         else
         {
          cout<<"invaid input";
         }
         break;
       
    case 5:
    
        cout <<"if your income is more than 15 lakh\n ";
        if(a>=1500000)
        {
            a=a-700000;
            a=a*30/100;
            cout<<"you are going to pay the tax of amount "<<a ;
        }
        break;

    }

}