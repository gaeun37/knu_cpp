#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	int getArea();
	int getVolume();
	int thickness;
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getVolume() {
	return width * height * thickness;
}


int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;
	cout << "width, height, thickness �Է�>>";
	cin >> rect.width >> rect.height >> rect.thickness;
	cout << "�簢���� ���Ǵ� " << rect.getVolume() << endl;
}