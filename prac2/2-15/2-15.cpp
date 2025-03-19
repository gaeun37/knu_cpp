//15

#include <iostream>
using namespace std;

int main() {
	while (1) {
		cout << '?';
		int a, b;
		char h[100];
		cin.getline(h, 100, '\n');
		char aa[100] = { 0 }, bb, cc[100] = { 0 };
		for (int i = 0; i < strlen(h); i++) {
			if (h[i] != ' ')
				aa[i] = h[i];
			else {
				bb = h[i + 1];
				for (int j = 0; j < strlen(h); j++) {
					if (h[i + 3 + j] != ' ')
						cc[j] = h[i + 3 + j];
				}
				break;
			}
		}
		a = atoi(aa);
		b = atoi(cc);
		if (bb == '+')
			cout << a << " + " << b << " = " << a + b << '\n';
		else if (bb == '-')
			cout << a << " - " << b << " = " << a - b << '\n';
		else if (bb == '*')
			cout << a << " * " << b << " = " << a * b << '\n';
		else if (bb == '/')
			cout << a << " / " << b << " = " << a / b << '\n';
		else if (bb == '%')
			cout << a << " % " << b << " = " << a % b << '\n';
	}
	return 0;
}
