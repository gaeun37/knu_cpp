//13

#include <iostream>
using namespace std;

int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>   ";
		int select;
		cin >> select;
		if (select < 1 || select>4) {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}
		if (select == 4) {
			cout << "���� ������ �������ϴ�.";
			break;
		}
		cout << "���κ�?";
		int num;
		cin >> num;
		if (select == 1)
			cout << "«�� " << num << "�κ� ���Խ��ϴ�\n";
		else if (select == 2)
			cout << "¥�� " << num << "�κ� ���Խ��ϴ�\n";
		else if (select == 3)
			cout << "������ " << num << "�κ� ���Խ��ϴ�\n";
	}
	return 0;
}
