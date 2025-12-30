# include <iostream>
using namespace std;
int peach(int d) {

	if (d == 10)
		return 1;
	else
		return 2 * (peach(d + 1) + 1);
}
int main() {
	cout << "猴子第一天共摘了" << peach(1) << "个桃子。" << endl;
}