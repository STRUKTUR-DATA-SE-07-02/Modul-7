#include <iostream>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string cleanStr;

    for (char c : str) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
            s.push(tolower(c));
        }
    }

    for (char c : cleanStr) {
        if (c != s.top()) {
            return false;
        }
        s.pop();
    }
    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}