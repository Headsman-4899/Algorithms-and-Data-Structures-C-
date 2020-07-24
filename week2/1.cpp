#include <iostream>
using namespace std;
int main()
{
    int n, div = 2;
    cin >> n;

    while (n > 1) {
        int k = 0;

        while (n % div == 0) {
            k++;
            n = n / div;
        }

        if (k > 0) {
            cout << div;
            if (k > 1) cout << "^" << k;
            if (n > 1) cout << "*";
        }
        
        if (div == 2) div++;
        else div += 2;
    }
    
    cout << endl;
    
    return 0;
}