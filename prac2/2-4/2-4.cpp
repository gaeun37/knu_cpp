//4

#include <iostream>
using namespace std;

int main() {
	double a[5] = { 0 };
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	double large = a[0];
	for (int j = 1; j < 5; j++) {
		if (large < a[j]) {
			large = a[j];
		}
	}
	cout << "���� ū �� = " << large;
	return 0;
}
