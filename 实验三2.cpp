#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num) {
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int m=0;
    for (int i = 1; m < 200; i++)
    {
        bool x = false;
        if (is_prime(i)) {
            cout << i << "\t";
            m++;
            x = true;
        }
        if (m % 10 == 0 && x) {
            cout << endl;
            x = false;
        }
    }
    return 0;
}