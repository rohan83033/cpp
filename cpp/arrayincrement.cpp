#include<iostream>
using namespace std;

int main ()
{
    int n;
    int arr[n];
    cout << "Enter the size of array you want to add : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout<< "Enter the value at index "<<i <<":" ;
        cin>> arr[i];
       
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i]<< endl;
    return 0;
}
   
// #include<iostream>
// using namespace std;

// int main(){

//     int n; 
//     cout<< " Enter the size of arrray ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<< "Enter at index " << i << " ";
//         cin>> arr[i];

//     }

    
//     return 0;


// }