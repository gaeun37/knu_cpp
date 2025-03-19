//6

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요>>";
	char pass[100];
	cin >> pass;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	char pass2[100];
	cin >> pass2;
	if (strcmp(pass, pass2) == 0)
		cout << "같습니다";
	else
		cout << "같지 않습니다";
	return 0;
}
