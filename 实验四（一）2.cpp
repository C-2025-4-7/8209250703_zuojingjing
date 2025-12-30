#include <iostream>
using namespace std;
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(double list[], int listSize) {
    bool changed = true;

    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) 
        {
            if (list[j] > list[j + 1]) 
            {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}
int main() {
    const int SIZE = 10;
    double numbers[SIZE];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < SIZE; i++) 
        cin >> numbers[i];
    cout << "原始数组：";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << "\t";
    }
    cout << endl;
    bubbleSort(numbers, SIZE);
    cout << "排序后的数组：";
    for (int i = 0; i < SIZE; i++) 
    {
        cout << numbers[i] << "\t";
    }
    cout << endl;
    return 0;
}