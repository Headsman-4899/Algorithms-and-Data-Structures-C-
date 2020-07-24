#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;

int n;
bool marked[N]; // 0,N-1
// bool isPrime(int x) {
// 	if (x == 1) return false;
// 	for (int i = 2; i < x; i++)
// 		if (x % i == 0)
// 			return false;
// 	return true;
// }

int main() {

	cin >> n;
	marked[1] = true;
	for (int i = 1; i <= n; i++) {
		if (!marked[i]) {
			// Here i is prime

			// i = 2
			// 4,6,8,...
			// i = 5
			// 10,15,...
			for (int j = 2*i; j <= n; j += i) {
				// run over numbers j divisible by i
				// and delete them
				marked[j] = true;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (!marked[i])
			cout << i << "\n";
	}



	

	return 0;
}

