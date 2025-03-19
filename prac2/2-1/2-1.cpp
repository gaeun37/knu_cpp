//1

#include <iostream>
using namespace std;

int main() {
	int count = 0;
	for (int n = 0; n < 100;) {
		while (count < 10) {
			n += 1;
			cout << n << "\t";
			count += 1;
		}
		cout << "\n";
		count = 0;
	}
	return 0;
}
