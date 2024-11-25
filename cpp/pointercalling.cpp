#include <iostream>
using namespace std;
void display(int **,int,int[]);
int arr(int **, int, int[]);

int arr(int **l, int size, int c[])
{
    for (int i = 0; i < size; i++)  
    {
        for (int j = 0; j < c[i]; j++)
        {
            cin >> *(*(l + i)+j); 
        }
    }
    return 0;
}
void display(int **l, int size, int c[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            cout << *(*(l + i) + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int x[2], y[2], z[2], q[2];
    int n[] = {2, 2, 2, 2};
    int *p[4];  
    p[0] = x;
    p[1] = y;
    p[2] = z;
    p[3] = q;
    //wkjefbliwujebfailesub
    //jbfiwqtuiqw
    // /abcdefghi

    arr(p, 4, n);  
    display(p, 4, n);


    return 0;
}



   