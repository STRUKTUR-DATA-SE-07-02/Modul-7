#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    stack<char> s;
    string filteredStr = "";
    for(char c : str) {
        if(isalnum(c)) {
            filteredStr += tolower(c);
        }
    }
    for(char c : filteredStr) {
        s.push(c);
    }
    for(char c : filteredStr) {
        if(c != s.top()) {
            return false;
        }
        s.pop();
    }
    return true;
}
int main() {
    string input;
    cout << "Masukkan Kalimat: ";
    getline(cin, input);

    if(isPalindrome(input)) {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}
