#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, z;
    cout << "Enter number of rows :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (k = n - 1; k >= i; k--)
        {
            cout << "-";
        }
      
        cout << endl;
    }
    return 0;
}