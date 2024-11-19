#include <iostream>
#include <stack>
#include <string>
#include <algorithm> // Untuk fungsi transform

using namespace std;

bool isPalindrome(const string& str) {
    stack<char> s;
    string cleanStr;

    
    for (char c : str) {
        if (isalnum(c)) { 
            cleanStr += tolower(c); 
        }
    }

    
    for (char c : cleanStr) {
        s.push(c);
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
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}
