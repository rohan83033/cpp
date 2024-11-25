 #include <iostream>
 using namespace std;
   
   class employee
   {
       private:
       int a,b,c ;
       public: 
       int d,e;
       void setdata(int a,int b,int c);
       void getdata()
       {
           cout<<"the value of a "<<a <<endl;
           cout<<"the value of b "<<b <<endl;
           cout<<"the value of c "<<c <<endl;
           cout<<"the value of d "<<e <<endl;
           cout<<"the value of e "<<d <<endl;
       }
   };
   void employee:: setdata(int a1,int b2, int c3)
   {
       a=a1 ; 
       b=b2  ;
       c=c3  ;
   }
   int main ()
   {
   employee rohan;
   rohan.d=5;
   rohan.e=6;
   rohan.setdata (10,20,30);
   rohan.getdata();
   return 0;
   }

   // oops in cpp