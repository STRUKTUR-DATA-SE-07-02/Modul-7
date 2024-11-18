#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> stk;
    string cleanStr;

    // Membersihkan string dari spasi
    for(char c : str) {
        if(c != ' ') {
            cleanStr += tolower(c); // Mengubah ke huruf kecil
        }
    }

    int length = cleanStr.length();
    int mid = length / 2;

    // Memasukkan setengah karakter pertama ke dalam stack
    for(int i = 0; i < mid; i++) {
        stk.push(cleanStr[i]);
    }

    // Jika panjang string ganjil, lewati karakter tengah
    if(length % 2 != 0) {
        mid++;
    }

    // Membandingkan setengah karakter terakhir dengan stack
    for(int i = mid; i < length; i++) {
        if(stk.empty() || stk.top() != cleanStr[i]) {
            return false;
        }
        stk.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Masukan Kalimat : ";
    getline(cin, input);

    cout << "Kalimat tersebut adalah : ";
    if(isPalindrome(input)) {
        cout << "Palindrom" << endl;
    } else {
        cout << "Bukan Palindrom" << endl;
    }

    return 0;
}
