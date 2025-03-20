#include <iostream>
using namespace std;

class Date {
	int year, month, day;
	Date(int a, int b, int c);
	Date(string d);
	int getYear();
	int getMonth();
	int getDay();
	int show();
};

Date::Date(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}

Date::Date(string d) {
	
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}