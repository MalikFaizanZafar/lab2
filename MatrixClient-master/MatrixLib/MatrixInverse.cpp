#include<iostream.h>
#include<conio.h>
using namespace std;
void main() {
	int array1[3][3] = [1, 2, 3, 4, 5, 6, 7, 8, 9];
	int inverse[3][3] = [0, 0, 0, 0, 0, 0, 0, 0, 0];
	int i, j = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			inverse[i][j] = array1[j][i];
		}
	}
	cout << 'Array 1  is : ' << array1 << endl;
	cout << "the result of inverse  is : " << inverse;
	getch();
}