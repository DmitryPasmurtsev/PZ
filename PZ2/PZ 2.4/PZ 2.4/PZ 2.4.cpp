#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int a;
	cout << "a = ";
	cin >> a;

	while(a > 0) {
		if (a % 2 == 1) {
			s = s + "1";
		}
		else s = s + "0";
		a = a / 2;

	}

	for (int i = size(s) - 1; i >= 0; i--) cout << s[i];

	return 0;
}