// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int array1[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int inverse[3][3] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
	int i, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			inverse[i][j] = array1[j][i];
		}
	}
	cout << "The Original Matix is : ";
	cout << endl;
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++){
			cout << array1[a][b];
		}
		cout << endl;
	}
	cout << "The Inversed Matix is : ";
	cout << endl;
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++){
			cout << inverse[a][b];
		}
		cout << endl;
	}
}