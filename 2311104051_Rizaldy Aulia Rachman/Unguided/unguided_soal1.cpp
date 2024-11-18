#include <iostream>
#include <stack>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(string sentence) {
    stack<char> charStack;
    string cleanSentence = "";

    for (char c : sentence) {
        if (isalnum(c)) {
            cleanSentence += tolower(c);
        }
    }

    for (char c : cleanSentence) {
        charStack.push(c);
    }

    string reversedSentence = "";
    while (!charStack.empty()) {
        reversedSentence += charStack.top();
        charStack.pop();
    }

    return cleanSentence == reversedSentence;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    if (isPalindrome(sentence)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
