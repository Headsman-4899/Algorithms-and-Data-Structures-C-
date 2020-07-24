#include <iostream>
using namespace std;
int a[1000];

void max_heapify(int a[], int i, int n)
{
    int high;
    int l = 2 * i;
    int r = 2 * i + 1;

    if( (l <= n) && a[l] > a[i] ) {
        high = l;
    }
    else {
        high = i;
    }

    if( (r <= n) && (a[r] > a[high]) )
        high = r; 
    
    if( high != i ) 
    {
        swap( a[i], a[high] );
        max_heapify( a, high, n );
    }

}

void build_heap(int a[], int n)
{
    for(int k = n/2; k > 0; k--)
    {
        max_heapify(a, k, n);
    }
}


int main() { 
    int queryNumbers;
    cin >> queryNumbers;
    int z = 1;
    for ( int i=1; i<=queryNumbers; i++ ){
        int query;
        cin >> query;
        if (query == 1){
            int input;
            cin >> input;
            a[z] = input;
            z++;
        }   
    else if (query == 2){
        build_heap(a,z);
        cout << a[1] << " ";
        swap(a[1],a[z]);
        z--;
        max_heapify(a, 1, z);
    }

  }
  return 0;

}