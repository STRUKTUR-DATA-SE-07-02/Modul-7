#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrom(string str) {
    stack<char> s;
    string cleanStr = "";

    // Membersihkan string dari spasi
    for(char c : str) {
        if(c != ' ') cleanStr += tolower(c);
    }

    int length = cleanStr.length();
    int mid = length / 2;

    // Push setengah karakter pertama ke stack
    for(int i = 0; i < mid; i++) {
        s.push(cleanStr[i]);
    }

    // Skip karakter tengah jika panjang string ganjil
    if(length % 2 != 0) mid++;

    // Bandingkan setengah karakter terakhir dengan stack
    for(int i = mid; i < length; i++) {
        if(s.empty() || s.top() != cleanStr[i]) return false;
        s.pop();
    }

    return true;
}

int main() {
    string kalimat;
    cout << "Masukan Kalimat : ";
    getline(cin, kalimat);

    cout << "Kalimat tersebut adalah : ";
    if(isPalindrom(kalimat))
        cout << "Palindrom" << endl;
    else
        cout << "Bukan Palindrom" << endl;

    return 0;
}
