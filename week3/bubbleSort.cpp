#include <iostream>
using namespace std;

int a[1000];
int n;

void bubbleSort()
{
    int i, j;
    for (i = 0; i < n - 1; i++) // i = 1, i < 4
    { 
        for (j = 0; j < n - i - 1; j++) // j = 1, j < 3
        {
            if (a[j] > a[j + 1]) { // a[0] > a[1]
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    bubbleSort();

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}