//16

#include <iostream>
using namespace std;

int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	char text[10000];
	cin.getline(text, 10000, ';');
	int alphabet[26] = { 0, };
	int total = 0;
	for (int i = 0; i < strlen(text); i++) {
		if (isalpha(text[i])) {
			char a = tolower(text[i]);
			alphabet[a - 'a'] += 1;
			total += 1;
		}
	}
	cout << "�� ���ĺ� �� " << total << '\n';
	for (int j = 0; j < 26; j++) {
		cout << char(j +'a') << " (" << alphabet[j] << ")\t: ";
		for (int k = 0; k < alphabet[j]; k++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}
