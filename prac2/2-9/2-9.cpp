//9

#include <iostream>
using namespace std;

int main() {
	cout << "�̸���?";
	char name[100];
	cin.getline(name, 100, '\n');
	cout << "�ּҴ�?";
	char address[100];
	cin.getline(address, 100, '\n');
	cout << "���̴�?";
	char age[100];
	cin.getline(age, 100, '\n');
	cout << name << ", " << address << ", " << age << "��";
	return 0;
}
