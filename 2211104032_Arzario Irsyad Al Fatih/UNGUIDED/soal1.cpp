#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string filteredStr = "";

    // Filter hanya huruf dan angka
    for (char c : str) {
        if (isalnum(c)) {
            filteredStr += tolower(c);
            s.push(tolower(c));
        }
    }

    // Periksa kesamaan dengan cara pop dari stack
    for (char c : filteredStr) {
        if (s.top() != c) {
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
        cout << "Kalimat tersebut adalah palindrom.\n";
    } else {
        cout << "Kalimat tersebut bukan palindrom.\n";
    }

    return 0;
}
