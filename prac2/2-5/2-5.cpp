//5

#include <iostream>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	char letter[100];
	cin.getline(letter, 100, '\n');
	int x = 0;
	for (int i = 0; i < 100; i++) {
		if (letter[i] == 'x')
			x += 1;
	}
	cout << "x�� ������ " << x;
	return 0;
}
