//4

#include <iostream>
using namespace std;

int main() {
	double a[5] = { 0 };
	cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	double large = a[0];
	for (int j = 1; j < 5; j++) {
		if (large < a[j]) {
			large = a[j];
		}
	}
	cout << "제일 큰 수 = " << large;
	return 0;
}
