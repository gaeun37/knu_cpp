//14

#include <iostream>
#include <cstring>
using namespace std;


int main() {
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�,\n";
	int total = 0;
	while (total<20000) {
		cout << "�ֹ�>> ";
		char coffee[100];
		int num;
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			cout << num * 2000 << "�Դϴ�. ���ְ� �弼��\n";
			total += num * 2000;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cout << num * 2300 << "�Դϴ�. ���ְ� �弼��\n";
			total += num * 2300;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			cout << num * 2500 << "�Դϴ�. ���ְ� �弼��\n";
			total += num * 2500;
		}
	}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
	return 0;
}
