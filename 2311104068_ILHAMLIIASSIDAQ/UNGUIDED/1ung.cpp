#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;


bool isPalindrome(const string& str) {
    stack<char> s; 
    string original; 
    string reversed; 
    
    
for (size_t i = 0; i < str.length(); ++i) {
    char c = str[i];
    if (isalnum(c)) {
        char lowerC = tolower(c);
        original += lowerC;
        s.push(lowerC);
    }
}

    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    return original == reversed;
}

int main() {
    string input;

    cout << "Masukan kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat ini bukan palindrom." << endl;
    }

    return 0;
}
