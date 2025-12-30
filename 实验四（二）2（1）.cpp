#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    const char* p1, * p2, * start;
    for (start = s2; *start != '\0'; start++) {
        p1 = s1;
        p2 = start;
        while (*p1 != '\0' && *p2 != '\0') {
            if (*p1 != *p2) {
                break;
            }
            p1++;
            p2++;
        }
        if (*p1 == '\0') {
            return start - s2;
        }
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    char s1[MAX_SIZE], s2[MAX_SIZE];
    cout << "请输入字符串s1: ";
    cin.getline(s1, MAX_SIZE);
    cout << "请输入字符串s2: ";
    cin.getline(s2, MAX_SIZE);
    int result = indexof(s1, s2);
    if (result != -1) {
        cout << "\"" << s1 << "\" 是 \"" << s2 << "\" 的子串" << endl;
        cout << "第一次出现的位置: " << result << endl;
    }
    else {
        cout << "\"" << s1 << "\" 不是 \"" << s2 << "\" 的子串" << endl;
    }

    return 0;
}