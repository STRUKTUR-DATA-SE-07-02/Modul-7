#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

void reverseWords(const string &sentence) {
    stringstream ss(sentence);
    string word;

    cout << "Datastack Array :\nData : ";
    while (ss >> word) {
        stack<char> s;

        for (char ch : word) {
            s.push(ch);
        }

        while (!s.empty()) {
            cout << s.top();
            s.pop();
        }

        cout << " "; 
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Masukkan Sebuah Kalimat Dengan Minimal 3 Kata : ";
    getline(cin, input);

    reverseWords(input);

    return 0;
}
