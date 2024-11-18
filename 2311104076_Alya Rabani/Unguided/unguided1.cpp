#include <iostream>
#include <stack> // import STL stack
#include <string>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    string cleanStr = "";
    
    // Membersihkan string dari spasi dan mengubah ke huruf kecil
    for(char c : str) {
        if(isalpha(c)) {
            cleanStr += tolower(c);
        }
    }
    
    int length = cleanStr.length();
    int midPoint = length / 2;
    
    // Memasukkan setengah karakter pertama ke dalam stack
    for(int i = 0; i < midPoint; i++) {
        s.push(cleanStr[i]);
    }
    
    // Jika panjang string ganjil, skip karakter tengah
    int startIndex = (length % 2 == 0) ? midPoint : midPoint + 1;
    
    // Membandingkan setengah karakter terakhir dengan isi stack
    for(int i = startIndex; i < length; i++) {
        if(s.empty() || s.top() != cleanStr[i]) {
            return false;
        }
        s.pop();
    }
    
    return s.empty();
}

int main() {
    string input;
    cout << "Masukan Kalimat : ";
    getline(cin, input);
    
    if(isPalindrome(input)) {
        cout << "Kalimat tersebut adalah : Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah : Bukan Palindrom" << endl;
    }
    
    return 0;
}