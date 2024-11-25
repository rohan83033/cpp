#include <iostream>
using namespace std;

bool search(int num[], int size, int key)
{
   for (int i = 0; i < size; i++)
   {
      if (num[i] == key)
      {
         return 1;
      }
   }
   return 0;
}

int main()
{
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int x;
   cin >> x;

   bool found = search(arr, 10, x);
   if (found)
   {
      cout << "key is present " << endl;
   }
   else
   {
      cout << "key is not present";
   }
   return 0;
}

// linear search