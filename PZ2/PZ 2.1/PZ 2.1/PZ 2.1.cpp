#include <iostream>
using namespace std;
int main() {
	int a, b, S, P, i = 0, k = 0;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	S = a * b;
	cout << "S = " << S << endl;
	P = a * 2 + b * 2;
	cout << "P = " << P << endl;
	while (k != b) {
		while (i != a) {
			cout << " * ";
			i++;
		}
		k++;
		i = 0;
		cout << endl;
	}
	cout << endl;

}
