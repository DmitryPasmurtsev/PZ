#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string toString(int number);
string toString(int number, int length);

int main() {
	int number, length;
	cout << "Enter number "; cin >> number;
	cout << "Your number as a string " << toString(number) << endl;
	cout << "Enter length "; cin >> length;
	cout << "Necessary part as a string " << toString(number, length);
}

string toString(int number) {
	string str;
	int num = fabs(number);
	while (num > 0) {
		char digit = num % 10 + '0';
		str += digit;
		num /= 10;
	}
	if (number < 0) str += "-";
	reverse(str.begin(), str.end());
	return str;
}
string toString(int number, int length) {
	string wholeNumber = toString(number);
	string necessaryPart;
	if (wholeNumber[0] == '-') {
		necessaryPart += "-";
		wholeNumber.erase(0, 1);
	}
	for (int i = 0; i < length; i++) {
		necessaryPart += wholeNumber[i];
	}
	return necessaryPart;
}
