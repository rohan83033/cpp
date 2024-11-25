#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<< " Enter the size of arrray ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<< "Enter at index " << i << " ";
        cin>> arr[i];

    }

    bool poll;
    cout << "Do you want to increase the size (1/0) ";
    cin >> poll;

    if(poll){
        int l;
        n++;
        cout << "Enter value at last index ";
        cin >> l;
        arr[n-1] = l;
        
    for( int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    }else{


    for( int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    }

    

    return 0;
}