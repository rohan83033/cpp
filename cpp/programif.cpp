#include <iostream>
 using namespace std;
 int main ()
 {
     int age ;
     cout <<"enter your age "<<endl;
     cin>>age;
     if (age<18)
      {
         cout <<"you can not come to party"<<endl;
      }
     else if (age ==18)
      {
         cout <<"you are kid if you want enter in party take kid pass "<<endl;
      }
     else 
      {
         cout <<"you can come to the party"<<endl;
      }
 
  return 0;
 }