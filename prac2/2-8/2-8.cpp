//8

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << '\n' << ">>";
	int max = 0;
	string lo;
	for (int i = 1; i <= 5; i++) {
		char name[100];
		cin.getline(name, 100, ';');
		cout << i << " : " << name << '\n';
		if (max < strlen(name)) {
			max = strlen(name);
			lo = name;
		}
	}
	cout << "���� �� �̸��� " << lo;
	return 0;
}
