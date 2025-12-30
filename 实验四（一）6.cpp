#include <iostream>
#include <cctype>  
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    int i = 0;
    while (s[i] != '\t') {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a'; 
            counts[index]++;
        }
        i++;
    }
}

int main() {
    const int max = 1000;
    const int size = 26;

    char str[max];
    int counts[size];
    cout << "Enter a string: ";
    cin.getline(str, max);
    count(str, counts);
    bool has = false;

    for (int i = 0; i < size; i++) {
        if (counts[i] > 0) {
            has = true;
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times";           
            cout << endl;
        }
    }
    if (!has) {
        cout << "No letters found in the string." << endl;
    }

    return 0;
}