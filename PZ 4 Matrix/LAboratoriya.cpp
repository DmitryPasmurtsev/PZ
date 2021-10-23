#include <iostream>
#include <algorithm>

using namespace std;

void printMatrix(int arr[], int row, int column) {
	int k = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[k] >= 0) cout << " ";
			cout << arr[k] << '\t';
			k++;
		}
		cout << endl << endl;
	}
}
void sum(int arr[], int row, int column) {
	int summa = 0;
	for (int i = 0; i < row * column; i++) {
		summa = summa + arr[i];
	}
	cout << summa << endl;
}
void average(int arr[], int row, int column) {
	int sum = 0;
	for (int i = 0; i < row * column; i++) {
		sum = sum + arr[i];
	}
	cout << sum / (row * column) << endl;
}
void multiply(int arr[], int row, int col) {
	int row2, col2, k = 0; 

	cout << "Enter 2-nd matrix parameters\n";//ввод размеров втрой матрицы и их проверка
	cout << "Rows2 = "; cin >> row2;
	cout << "Columns2 = "; cin >> col2;
													   
	if (col2 == row) 
	{
		
	    //сделал из одномерного массива двумерный, так легче перемножать
		int** arr0 = new int* [row];
		for (int i = 0; i < row; i++) {
			arr0[i] = new int[col];
		}
		cout << "First martix\n";
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				arr0[i][j] = arr[k];
				if (arr0[i][j] >= 0) cout << " ";
				cout << arr0[i][j] << '\t';
				k++;
			}
			cout << endl << endl;
		}
	    // создание второй матрицы, на которую будем умножать 
		int** arr2 = new int*[row2]; 
		for (int i = 0; i < row2; i++) {
			arr2[i] = new int[col2];
		}
		// вывод второй матрицы
		cout << "Second martix\n";
		for (int i = 0; i < row2; i++) {
			for (int j = 0; j < col2; j++) {
				arr2[i][j] = rand() % 201 - 100;
				if (arr2[i][j] >= 0) cout << " ";
				cout << arr2[i][j] << '\t';
				k++;
			}
			cout << endl << endl;
		}

		cout << "Result\n";
		// создание матрицы-результата
		int** arr3 = new int* [row];
		for (int i = 0; i < row; i++) {
			arr3[i] = new int[col2];
		}
		// перемножение
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col2; j++) {
				arr3[i][j] = 0;
				for (int k = 0; k < col; k++) {
					arr3[i][j] += arr0[i][k] * arr2[k][j];
				}
			}
		}
		// вывод конечной матрицы
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col2; j++) {
				if (arr3[i][j] >= 0) cout << " ";
				cout << arr3[i][j] << '\t';
				k++;
			}
			cout << endl << endl;
		}



		//удаление динамических массивов, которые мы создавали в этой функции
		for (int i = 0; i < row; i++) {
			delete[] arr0[i];
		}
		delete[] arr0;

		for (int i = 0; i < row2; i++) {
			delete[] arr2[i];
		}
		delete[] arr2;

		for (int i = 0; i < row; i++) {
			delete[] arr3[i];
		}
		delete[] arr3;
	}
	else cout << "Cannot be multiplied\n";
	
}
bool compare(int a, int b) {
	return a <= b;
}
void median(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	sort(arr, arr + size, compare);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Median of the array = " << arr[size / 2];
	cout << endl;
}
void MAXandMIN(int arr[], int size) {
	int max = arr[0], min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) max = arr[i];
		else if (arr[i] < min) min = arr[i];
	}
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;

}


int main() {
	srand(time(NULL));
	int row, column, f;
	cout << "Enter matrix parameters\n";
	cout << "Rows = "; cin >> row;
	cout << "Columns = "; cin >> column;
	int size = row * column;
	int *arr = new int [size];
     
	for (int i = 0; i < size; i++) {
			arr[i] = rand() % 201 - 100;		
	}
	cout << "   What should i do? \n";
	cout << " Print matrix - 1)\n Sum of elements - 2)\n Average - 3)\n Multiply matrices - 4)\n Median of the array - 5)\n Max and Min element - 6)\n STOP - 0\n";
	cin >> f;
	while (f != 0) {
		switch (f) { 
		case 1: printMatrix(arr, row, column); break;
		case 2: sum(arr, row, column); break;
		case 3: average(arr, row, column); break;
		case 4: multiply(arr, row, column); break;
		case 5: median(arr, size); break;
		case 6: MAXandMIN(arr, size); break;
		default: cout << "Error";
		}
		cout << "   What should i do? \n";
		cin >> f; cout << endl;
	}
	delete[] arr;
	return 0;
	
}