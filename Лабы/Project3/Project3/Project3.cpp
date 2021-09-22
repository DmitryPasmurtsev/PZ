#include <iostream>
using namespace std;
int main() {
	int year,color, animal;
	cout << "year = ";
	cin >> year;
	color = year % 10;
	switch (color) {
	case 0: cout << "GRIGIO, ";
		break;
	case 1: cout << "GRIGIO, ";
		break;
	case 2:cout << "AZZURRO, ";
		break;
	case 3:cout << "AZZURRO, ";
		break;
	case 4:cout << "VERDE, ";
		 break;
    case 5:cout << "VERDE, ";
		 break;
	case 6:cout << "ROSSO, ";
		break;
	case 7:cout << "ROSSO, ";
		break;
	case 8:cout << "GIALLO, ";
		break;
	case 9: cout << "GIALLO, ";
		break;
	}
	animal = year % 12;
	switch (animal) {
	case 0: cout << "monkey";
		break;
	case 1: cout << "cock";
		break;
	case 2: cout << "dog";
		break;
	case 3: cout << "pig";
		break;
	case 4: cout << "rat";
		break;
	case 5: cout << "bull";
		break;
	case 6: cout << "tiger";
		break;
	case 7: cout << "cat";
		break;
	case 8: cout << "dragon";
		break;
	case 9: cout << "snake";
		break;
	case 10: cout << "horse";
		break;
	case 11: cout << "goat";
		break;
	}
	return 0;
}