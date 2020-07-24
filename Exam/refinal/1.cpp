#include<iostream>
using namespace std;

int a[1000];
int n;

void bubbleSort()
{
    int i, j;
    for (i = 0; i < n - 1; i+=2)
    { 
        for (j = 0; j < n - i - 1; j+=2) 
        {
            if (a[j] > a[j + 2]) { 
                swap(a[j], a[j + 2]);
            }
        }
    }

    for (int i = 0; i < n - 1; i+=2)
    { 
        for (int j = 1; j < n - i - 1; j+=2) 
        {
            if (a[j] < a[j + 2]) { 
                swap(a[j], a[j + 2]);
            }
        }
    }
}


int main(){

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bubbleSort();

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}