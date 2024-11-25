#include<iostream>
using namespace std;
int main ()
{
    int arr[4], n , i , max , min ,avg ;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    } 
      avg=(arr[0]+arr[1]+arr[2])/n;
 
    cout <<"\nLargest element :" << max;
    cout <<"\nSmallest element : "<< min;
    cout<<"\nthe average of the sum of number are :"<< avg;
    return 0;


}