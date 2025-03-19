//13

#include <iostream>
using namespace std;

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while (1) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>   ";
		int select;
		cin >> select;
		if (select < 1 || select>4) {
			cout << "다시 주문하세요!!\n";
			continue;
		}
		if (select == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		cout << "몇인분?";
		int num;
		cin >> num;
		if (select == 1)
			cout << "짬뽕 " << num << "인분 나왔습니다\n";
		else if (select == 2)
			cout << "짜장 " << num << "인분 나왔습니다\n";
		else if (select == 3)
			cout << "군만두 " << num << "인분 나왔습니다\n";
	}
	return 0;
}
