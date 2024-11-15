// Program untuk mengecek apakah sebuah kalimat adalah palindrom menggunakan C++
#include <iostream>
#include <stack>
#include <algorithm> // untuk transform

// Fungsi untuk mengecek apakah kalimat adalah palindrom
bool is_palindrome(std::string kalimat) {
    std::stack<char> stack;

    // Menghilangkan spasi dan mengubah ke huruf kecil
    kalimat.erase(remove(kalimat.begin(), kalimat.end(), ' '), kalimat.end());
    std::transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);

    // Menyimpan karakter ke dalam stack
    for (char c : kalimat) {
        stack.push(c);
    }

    // Membandingkan karakter satu per satu
    for (char c : kalimat) {
        if (c != stack.top()) {
            return false;
        }
        stack.pop();
    }
    return true;
}

int main() {
    std::string kalimat;
    std::cout << "Masukkan Kalimat: ";
    std::getline(std::cin, kalimat);

    if (is_palindrome(kalimat)) {
        std::cout << "Kalimat tersebut adalah palindrom" << std::endl;
    } else {
        std::cout << "Kalimat tersebut bukan palindrom" << std::endl;
    }

    return 0;
}
