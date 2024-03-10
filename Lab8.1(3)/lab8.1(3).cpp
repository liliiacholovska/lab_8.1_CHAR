#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int FindThirdDotIndex(const char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '.') {
            ++count;
            if (count == 3) {
                return i;
            }
        }
    }
    return -1;
}

char* ReplaceEveryFourthCharWithDot(const char* s) {
    int length = strlen(s);
    char* modifiedStr = new char[length + 1];
    for (int i = 0; i < length; ++i) {
        modifiedStr[i] = s[i];
    }
    modifiedStr[length] = '\0';

    for (int i = 3; i < length; i += 4) {
        modifiedStr[i] = '.';
    }

    return modifiedStr;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 101);

    int thirdDotIndex = FindThirdDotIndex(str);
    cout << "Index of the third dot: " << thirdDotIndex << endl;

    char* modifiedStr = ReplaceEveryFourthCharWithDot(str);
    cout << "Modified string: " << modifiedStr << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    delete[] modifiedStr;
    return 0;
}