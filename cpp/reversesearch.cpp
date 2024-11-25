#include<iostream>
using namespace std;
 
 void printarray(int num[], int n)
 {
   for(int i=0;i<=9;i++)
   {
    cin>>num[i];
   }
    for(int i=0;i<=9;i++)
    {
        cout<<num[i]<<endl;
    }
 }
 void reverse(int num[],int n)
 {
   int start=0;
   int end=n-1;

   while(start<=end)
   {
    swap(num[start],num[end]);
    start++;
    end--;
   }
    for(int i=0;i<=9;i++)
    {
        cout<<num[i]<<endl;
    }
 }
int main()
{
   int arr[10];
   printarray(arr,10);
   reverse(arr,10);
return 0;
   
}