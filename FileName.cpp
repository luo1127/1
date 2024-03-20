#include <iostream>

using namespace std;
int sum(int a[][3], int lin) {
	int sum = 0;
	for (int i = 0; i < lin; i++) {
		for (int j = 0; j < 3; j++) {
			sum += a[i][j];
		}
	}
	return sum;
}
int main() {
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	cout << sum(a,  3) << endl;
	return 0;
}