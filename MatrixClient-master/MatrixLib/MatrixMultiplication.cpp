#include<iostream.h>
#include<conio.h>
using namespace std;
void main() {
	int array1[3][3] = [1, 2, 3, 4, 5, 6, 7, 8, 9];
	int array2[3][3] = [11, 12, 13, 14, 15, 16, 17, 18, 19];
	int mull[3][3] = [0, 0, 0, 0, 0, 0, 0, 0, 0];
	int i, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mull[i][j] = array1[i][j] * array2[i][j];
		}
	}
	cout << 'Array 1  is : ' << array1 << endl;
	cout << 'Array2 is : ' << array2 << endl;
	cout << "the result of multiplication is : " << mull << endl;
	getch();
}