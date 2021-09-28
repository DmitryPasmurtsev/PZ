#include <iostream>
using namespace std;
int gcd(int x, int y) //функция нахождения наибольшего общего делителя (greatest common divisor)
{
	while (y != 0) {
		int z = x % y;
		x = y;
		y = z;
	}
	return x;
}
int main() {
	int a, b, an = 0, bn = 0;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	for (int i = 1; i <= a; i++) //проверка числа а
	{
		if (a % i  == 0) {
			an++;
		}
	}
	for (int k = 1; k <= b; k++) //проверка числа b
	{
		if (b % k == 0) {
			bn++;
		}
	}
	if (an == 2 and bn == 2) cout << "Numbers are prime\n";
    if (an > 2 or a < 0) cout << "Number 'a' is unprime\n";
	if (bn > 2 or b < 0) cout << "Number 'b' is unprime\n";
	if (a > 0 and b > 0) cout << "gcd(a, b) = " << gcd(a, b);
}
