#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseString(const string& str) {
    stack<char> s;
    for(char c : str) {
        s.push(c);
    }
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << " ";
}
int main() {
    string input;
    cout << "Masukkan Kata: ";
    getline(cin, input);

    string word = "";
    cout << "Datastack Array :\nData : ";

    for (char c : input) {
        if (c == ' ') {
            reverseString(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        reverseString(word);
    }
    cout << endl;
    return 0;
}
