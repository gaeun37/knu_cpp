//7

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	while (1) {
		char out[100];
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(out, 100, '\n');
		if (strcmp(out,"yes")==0) {
			cout << "�����մϴ�...";
			break;
		}
	}
	return 0;
}
