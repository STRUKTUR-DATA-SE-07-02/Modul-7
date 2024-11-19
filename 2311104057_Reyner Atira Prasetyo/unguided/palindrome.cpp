#include <iostream>
#include <stack>
#include <string>
#include <cctype> // Untuk isalnum dan tolower
using namespace std;

/**
 * @brief Fungsi untuk memeriksa apakah kalimat adalah palindrom
 * 
 * This function filters out non-alphanumeric characters from the input string and converts
 * all characters to lowercase. It then uses a stack to compare the filtered string with its
 * reverse to determine if it is a palindrome.
 * 
 * @param str The input string to be checked.
 * @return true if the input string is a palindrome, false otherwise.
 */
bool isPalindrome(string str) {
    stack<char> charStack;
    string filtered = "";
    
    // Filter karakter non-alfanumerik dan simpan dalam lowercase
    for (char ch : str) {
        if (isalnum(ch)) {
            char lowerChar = tolower(ch);
            filtered += lowerChar;
            charStack.push(lowerChar); // Masukkan ke stack
        }
    }
    
    // Bandingkan string yang difilter dengan isi stack
    for (char ch : filtered) {
        if (ch != charStack.top()) {
            return false; // Bukan palindrom
        }
        charStack.pop(); // Hapus elemen teratas stack
    }
    
    return true; // Palindrom jika semua cocok
}

int main() {
    string input;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah palindrom.\n";
    } else {
        cout << "Kalimat tersebut bukan palindrom.\n";
    }

    return 0;
}
