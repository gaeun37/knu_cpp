//6

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	char pass[100];
	cin >> pass;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	char pass2[100];
	cin >> pass2;
	if (strcmp(pass, pass2) == 0)
		cout << "�����ϴ�";
	else
		cout << "���� �ʽ��ϴ�";
	return 0;
}
