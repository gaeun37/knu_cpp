//8

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << '\n' << ">>";
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
	cout << "가장 긴 이름은 " << lo;
	return 0;
}
