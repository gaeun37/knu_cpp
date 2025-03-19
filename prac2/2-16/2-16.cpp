//16

#include <iostream>
using namespace std;

int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
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
	cout << "총 알파벳 수 " << total << '\n';
	for (int j = 0; j < 26; j++) {
		cout << char(j +'a') << " (" << alphabet[j] << ")\t: ";
		for (int k = 0; k < alphabet[j]; k++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}
