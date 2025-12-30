#include "iostream"
using namespace std;
int zdgys(int a, int b)
{
	int c;
	while (b != 0) {
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}
int zxgbs(int d, int e, int f) {
	int g;
	g = d * e / f;
	return g;
}
int main() {
	int m, n, z, y;
	cout << "请输入两个自然数";
	cin >> m >> n;
	if (m < 0 || n < 0) {
		cout << "不符合要求!" << endl;
		return 0;
	}
	else if (m < n) {
		int x;
		x = m; m = n; n = x;
	}
	z = zdgys(m, n);
	cout << m << "和" << n << "的最大公约数为" << z << endl;
	y = zxgbs(m, n, z);
	cout << m << "和" << n << "的最小公倍数为" << y << endl;
	return 0;
}