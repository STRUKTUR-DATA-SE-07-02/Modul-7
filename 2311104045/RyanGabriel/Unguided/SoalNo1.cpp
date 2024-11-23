#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool adalahPalindrom(string kalimat) {
    stack<char> tumpukan;
    string asli = "";

    
    for (char karakter : kalimat) {
        if (karakter != ' ') { 
            tumpukan.push(tolower(karakter)); 
            asli += tolower(karakter); 
        }
    }

    
    string terbalik = "";
    while (!tumpukan.empty()) {
        terbalik += tumpukan.top(); 
        tumpukan.pop();
    }

    return asli == terbalik; 
}

int main() {
    string masukan;
    cout << "Masukkan kalimat: ";
    getline(cin, masukan); 

    if (adalahPalindrom(masukan)) {
        cout << "Kalimat tersebut adalah Palindrom.\n";
    } else {
        cout << "Kalimat tersebut bukan Palindrom.\n";
    }

    return 0;
}