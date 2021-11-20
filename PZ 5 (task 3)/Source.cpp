#include <iostream>

using namespace std;

void createIntArr(int size);
void createCharArr(int size);

int numberOfMeetings(int* arr, int size, int number);
int numberOfMeetings(char* arr, int size, char number);

int main() {
	int size, f;
	cout << "Enter the number of elements in the array "; cin >> size;
	cout << "What type of array do you want? " << endl;
	cout << "1) integer\n2) char\n0) STOP\n"; cin >> f;
	while (f != 0) {
		switch (f) {
		case 1: createIntArr(size); break;
		case 2: createCharArr(size); break;
		case 0: break;
		}
		cout << "\nWhat type of array do you want? " << endl;
		cin >> f;
	}
}

void createIntArr(int size) {
	int* arr = new int[size];
	cout << "Enter elemetnts\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	int number;
	cout << "Enter number "; cin >> number;
	numberOfMeetings(arr, size, number);
	delete[] arr;
}
void createCharArr(int size) {
	char* arr = new char[size];
	cout << "Enter elemetnts\n";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	char number;
	cout << "Enter number "; cin >> number;
	numberOfMeetings(arr, size, number);
	delete[] arr;
}

int numberOfMeetings(int* arr, int size, int number) {
	int amount = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == number) amount++;
	}
	cout << "This number occurs " << amount << " times";
	return 0;
}

int numberOfMeetings(char* arr, int size, char number) {
	int amount = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == number) amount++;
	}
	cout << "This number occurs " << amount << " times";
	return 0;
}