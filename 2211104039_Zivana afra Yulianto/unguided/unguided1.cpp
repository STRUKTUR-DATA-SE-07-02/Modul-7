#include <iostream>
#include <stack>
#include <algorithm> // untuk transform
using namespace std;

// Fungsi untuk memeriksa apakah kalimat adalah palindrom
bool isPalindrome(string sentence)
{
    // Normalisasi kalimat: hapus spasi dan ubah ke huruf kecil
    string normalized_sentence = "";
    for (char c : sentence)
    {
        if (c != ' ')
        { // Abaikan spasi
            normalized_sentence += tolower(c);
        }
    }

    // Gunakan stack untuk membalikkan string
    stack<char> s;
    for (char c : normalized_sentence)
    {
        s.push(c);
    }

    // Bangun string terbalik dari stack
    string reversed_sentence = "";
    while (!s.empty())
    {
        reversed_sentence += s.top();
        s.pop();
    }

    // Periksa apakah string asli sama dengan versi terbaliknya
    return normalized_sentence == reversed_sentence;
}

int main()
{
    string sentence;

    // Input langsung menggunakan getline
    cout << "Masukkan kalimat: ";
    getline(cin, sentence); // Membaca seluruh kalimat dengan spasi

    // Hasil
    if (isPalindrome(sentence))
    {
        cout << "Kalimat tersebut adalah palindrom" << endl;
    }
    else
    {
        cout << "Kalimat tersebut bukan palindrom" << endl;
    }

    return 0;
}
