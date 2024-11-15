
//Unguided no 1
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrom(string kata) {
    stack<char> s;
    string cleanStr = "";

    for(char c : kata) {
        if(c != ' ') {
            cleanStr += tolower(c);
        }
    }

    int length = cleanStr.length();
    int mid = length / 2;

    for(int i = 0; i < mid; i++) {
        s.push(cleanStr[i]);
    }

    int startIndex = (length % 2 == 0) ? mid : mid + 1;

    for(int i = startIndex; i < length; i++) {
        if(s.empty() || s.top() != cleanStr[i]) {
            return false;
        }
        s.pop();
    }

    return s.empty();
}

int main() {
    string kata;
    cout << "Masukan Kalimat : ";
    getline(cin, kata);

    cout << "Kalimat tersebut adalah : ";
    if(isPalindrom(kata)) {
        cout << "Palindrom" << endl;
    } else {
        cout << "Bukan Palindrom" << endl;
    }

    return 0;
}

//Unguided no 2
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

string balikKalimat(string kalimat) {
    stack<string> tumpukan;
    stringstream ss(kalimat);
    string kata, hasil = "";

    while (ss >> kata) {
        tumpukan.push(kata);
    }

    while (!tumpukan.empty()) {
        hasil += tumpukan.top();
        tumpukan.pop();
        if (!tumpukan.empty()) {
            hasil += " ";
        }
    }
    return hasil;
}
int main() {
    string kalimat;

    cout << "Masukkan Kata: ";
    getline(cin, kalimat);

    cout << "Datastack Array : " << endl;
    cout << "Data : " << balikKalimat(kalimat) << endl;

    return 0;
}
