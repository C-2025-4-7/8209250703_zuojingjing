#include <iostream>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString) {
    const char* p = hexString;
    int result = 0;
    if (*p == '0' && (*(p + 1) == 'x' || *(p + 1) == 'X')) {
        p += 2;
    }
    while (*p != '\t') {
        char ch = *p;
        int digit;
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }        
        result = result * 16 + digit;
        p++;
    }

    return result;
}

int main() {
    const int MAX_SIZE = 20;
    char hexString[MAX_SIZE];
    cout << "请输入16进制数: ";
    cin.getline(hexString, MAX_SIZE);
    int decimalValue = parseHex(hexString);
    cout << "16进制数 \"" << hexString << "\" 转换为10进制是: "
        << decimalValue << endl;
    return 0;
}