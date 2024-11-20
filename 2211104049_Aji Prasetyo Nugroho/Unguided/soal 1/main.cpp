#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> s;
    string cleaned = "";

    for (char c : kalimat) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    for (char c : cleaned) {
        s.push(c);
    }

    for (char c : cleaned) {
        if (c != s.top()) {
            return false;
        }
        s.pop();
    }

    return true;
}

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah: Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah: Bukan Palindrom" << endl;
    }

    return 0;
}
