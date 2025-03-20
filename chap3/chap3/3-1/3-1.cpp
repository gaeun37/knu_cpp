#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	double innerArea();
	int innerRadius, outerRadius;
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::innerArea() {
	return (3.14 * outerRadius * outerRadius) - (3.14 * innerRadius * innerRadius);
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	Circle donut_two;
	donut_two.innerRadius = 1;
	donut_two.outerRadius = 2;
	double innerarea = donut_two.innerArea();
	cout << "donut 내부면적은 " << innerarea << endl;
}