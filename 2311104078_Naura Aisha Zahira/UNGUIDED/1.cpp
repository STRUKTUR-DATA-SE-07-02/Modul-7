#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string cleanStr = "", reversedStr = "";

    // Membersihkan string dari spasi dan membuat huruf kecil
    for (char c : str) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
        }
    }

    // Memasukkan ke stack
    for (char c : cleanStr) {
        s.push(c);
    }

    // Membuat string terbalik dari stack
    while (!s.empty()) {
        reversedStr += s.top();
        s.pop();
    }

    // Membandingkan string asli dengan yang terbalik
    return cleanStr == reversedStr;
}

int main() {
    string input;
    cout << "Masukkan Kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}
