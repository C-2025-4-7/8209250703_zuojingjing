# include <iostream>
using namespace std;
int main() {
	int num[10], distinct[10];
	int n = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		bool flag = true;
		for (int j = 0; j < n; j++) {
			if (num[i] == distinct[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			distinct[n] = num[i];
			n = n + 1;
		}
	}
	cout << "The distinct numbers are:" << endl;
	for (int t = 0; t < n; t++)
		cout << distinct[t] << '\t';
	return 0;
}