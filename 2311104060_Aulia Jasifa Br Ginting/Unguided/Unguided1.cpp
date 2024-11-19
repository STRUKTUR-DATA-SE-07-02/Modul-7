#include <iostream>
#include <stack>
#include <string>
#include <cctype> // untuk fungsi tolower()
using namespace std;

// Fungsi untuk membersihkan string dari karakter non-alphanumeric
string cleanString(string str) {
    string result = "";
    for(char c : str) {
        if(isalnum(c)) { // hanya menyimpan huruf dan angka
            result += tolower(c);
        }
    }
    return result;
}

// Fungsi untuk mengecek palindrom menggunakan stack
bool isPalindrome(string str) {
    string cleanStr = cleanString(str);
    stack<char> s;
    int length = cleanStr.length();
    int mid = length / 2;
    
    // Push setengah pertama string ke dalam stack
    for(int i = 0; i < mid; i++) {
        s.push(cleanStr[i]);
    }
    
    // Jika panjang string ganjil, skip karakter tengah
    if(length % 2 != 0) {
        mid++;
    }
    
    // Bandingkan setengah kedua string dengan isi stack
    for(int i = mid; i < length; i++) {
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
    
    cout << "Kalimat tersebut adalah : ";
    if(isPalindrome(input)) {
        cout << "Palindrom" << endl;
    } else {
        cout << "bukan Palindrom" << endl;
    }
    
    return 0;
}