//7

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	while (1) {
		char out[100];
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(out, 100, '\n');
		if (strcmp(out,"yes")==0) {
			cout << "종료합니다...";
			break;
		}
	}
	return 0;
}
