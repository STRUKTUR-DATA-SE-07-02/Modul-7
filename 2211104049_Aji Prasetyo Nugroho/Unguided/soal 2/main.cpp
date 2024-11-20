#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverseWordsWithStack(string kalimat) {
    stack<char> s;
    string reversed = "";

    for (char c : kalimat) {
        if (c == ' ') {
            while (!s.empty()) {
                reversed += s.top();
                s.pop();
            }
            reversed += ' ';
        } else {
            s.push(c);
        }
    }

    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << "Data: " << reversed << endl;
}

int main() {
    string kalimat;

    cout << "Masukkan Kata: ";
    getline(cin, kalimat);

    cout << "Datastack Array :" << endl;
    reverseWordsWithStack(kalimat);

    return 0;
}
