#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(const string &str) {
    stack<char> s;
    string cleanedstr;

    for (char ch : str) {
        if (isalnum(ch)) {
            cleanedstr += tolower(ch);
        }
    }

    for (char ch : cleanedstr) {
        s.push(ch);
    }

    for (char ch : cleanedstr) {
        if (s.top() != ch) {
            return false;
        }
        s.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Masukkan Sebuah Kalimat : ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat adalah Palindrome.\n";
    }
    else {
        cout << "Bukan Palindrome.\n";
    }

    return 0;
}