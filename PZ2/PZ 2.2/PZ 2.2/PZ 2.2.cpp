#include <iostream>
using namespace std;
int main() {
	int n, b = 0, a = 1, fac = 1;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << b << " ";
		a = a + b;
		b = a - b;
	}
	for (int k = 1; k <= n; k++) {
		fac = fac * k;
	}
	cout << "\nfac"<< n << " = " << fac;
	return 0;
}