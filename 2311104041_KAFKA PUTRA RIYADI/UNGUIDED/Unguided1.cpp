#include <iostream>
#include <stack>
#include <cctype> 
using namespace std;
bool isPalindrome(string sentence) {
    stack<char> charStack;
    string normalized = "";

    for (char c : sentence) {
        if (isalnum(c)) {
            normalized += tolower(c);
        }
    }

    for (char c : normalized) {
        charStack.push(c);
    }

    string reversed = "";
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    return normalized == reversed;
}

int main() {
    string sentence;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence)) {
        cout << "Kalimat '" << sentence << "' adalah palindrom." << endl;
    } else {
        cout << "Kalimat '" << sentence << "' bukan palindrom." << endl;
    }

    return 0;
}
