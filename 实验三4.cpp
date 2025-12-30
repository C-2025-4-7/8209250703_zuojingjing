# include <iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3);
double area(double side1, double side2, double side3);
int main() {
	double a, b, c;
	cout << "请输入三角形三边长";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
		cout << "三角形面积为" << area(a, b, c) << endl;
	else
		cout << "输入的三角形三边不合法！";
	return 0;
}
