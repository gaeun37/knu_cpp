//14

#include <iostream>
#include <cstring>
using namespace std;


int main() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다,\n";
	int total = 0;
	while (total<20000) {
		cout << "주문>> ";
		char coffee[100];
		int num;
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			cout << num * 2000 << "입니다. 맛있게 드세요\n";
			total += num * 2000;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			cout << num * 2300 << "입니다. 맛있게 드세요\n";
			total += num * 2300;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			cout << num * 2500 << "입니다. 맛있게 드세요\n";
			total += num * 2500;
		}
	}
	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
	return 0;
}
