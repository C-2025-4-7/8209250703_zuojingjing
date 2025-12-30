#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k] = list1[i];
            k += 1; i += 1;
        }
        else {
            list3[k] = list2[j];
            k += 1; j += 1;
        }
    }
    while (i < size1) {
        list3[k] = list1[i];
        k += 1; i += 1;
    }
    while (j < size2) {
        list3[k]= list2[j];
        k += 1; j += 1;
    }
}
int main() {
     const int max = 80;
    int size1, size2;
    int list1[max], list2[max], list3[2 * max];

    cout << "请输入第一个已排序数组：" << endl;
    cout << "输入数组1的元素个数: ";
    cin >> size1;
    cout << "输入 " << size1 << " 个整数: ";
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }
    cout << "\n请输入第二个已排序数组：" << endl;
    cout << "输入数组2的元素个数: ";
    cin >> size2;
    cout << "输入 " << size2 << " 个整数: ";
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);

    cout << "\n合并后的数组为：" << endl;
    for (int i = 0; i < size1 + size2; i++) 
    {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}