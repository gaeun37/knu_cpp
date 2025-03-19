//10 

#include <iostream>
using namespace std;

int main() {
	cout << "문자열 입력>>";
	char letter[100];
	cin.getline(letter, 100, '\n');
	for (int i = 0; i < strlen(letter); i++) {
		int nu = 0;
		while (nu <= i) {
			cout << letter[nu];
			nu += 1;
		}
		cout << '\n';
	}
	return 0;
}
