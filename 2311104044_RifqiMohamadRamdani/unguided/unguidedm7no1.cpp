#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> s;

    kalimat.erase(remove(kalimat.begin(), kalimat.end(), ' '), kalimat.end());
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);

    for (char ch : kalimat) {
        s.push(ch);
    }

    string kalimatTerbalik;
    while (!s.empty()) {
        kalimatTerbalik += s.top();
        s.pop();
    }

    return kalimat == kalimatTerbalik;
}

int main() {
    string kalimat;
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}
