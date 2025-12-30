#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int LOCKERS = 100;
    const int NUM = 100;
    bool lockers[LOCKERS] = { true }; 
    for (int student = 2; student <= NUM; student++) {
        for (int locker = student - 1; locker < LOCKERS; locker += student+1) 
        {
            lockers[locker] = !lockers[locker];
        }
    }

    int open = 0;
    cout << "打开的存物柜号码：";

    for (int i = 0; i < LOCKERS; i++) {
        if (lockers[i]) {
            open++;
            cout << i + 1 << " ";
        }
    }

    cout << "\n\n总共打开了 " << open << " 个存物柜" << endl;

    return 0;
}