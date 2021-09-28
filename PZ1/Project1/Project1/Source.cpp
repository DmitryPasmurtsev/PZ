#include <iostream>
using namespace std;
int main() {
	int n;
	float res;
	cout << "n =  ";
	cin >> n;
	if (n / 1000 == 0 and (n / 100 > 0  or n / 100 < 0)) // проверка на ввод трехзначного числа
	{
		if (n % 2 == 0) {
			cout << " Chetnoe " << endl;
		}
		else {
			cout << " Nechetnoe " << endl;
		}
		cout << "Srednee arifmeticheskoe tsyfr chisla =  ";
		res = (float)fabs(((n / 100) + ((n / 10) - (n / 100 * 10)) + n % 10)) / 3;
		cout << res;
	}
	else {
		cout << "Error";
	}
	return 0;
}