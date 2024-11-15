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

// Fungsi untuk membalikkan kalimat menggunakan stack
std::string reverse_sentence(std::string sentence) {
    std::stack<char> stack;
    std::string reversed_sentence;

    // Menyimpan setiap karakter dalam stack
    for (char c : sentence) {
        stack.push(c);
    }

    // Mengeluarkan karakter satu per satu dari stack untuk membalikkan kalimat
    while (!stack.empty()) {
        reversed_sentence += stack.top();
        stack.pop();
    }

    return reversed_sentence;
}

int main() {
    std::string kalimat;
    std::cout << "Masukkan Kata: ";
    std::getline(std::cin, kalimat);

    std::cout << "Datastack Array: " << std::endl;
    std::cout << "Data: " << reverse_sentence(kalimat) << std::endl;

    return 0;
}
