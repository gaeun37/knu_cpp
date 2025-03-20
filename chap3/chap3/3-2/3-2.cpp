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
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "width, height, thickness 입력>>";
	cin >> rect.width >> rect.height >> rect.thickness;
	cout << "사각형의 부피는 " << rect.getVolume() << endl;
}