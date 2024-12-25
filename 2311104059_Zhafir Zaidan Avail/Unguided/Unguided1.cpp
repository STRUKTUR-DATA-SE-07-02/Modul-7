#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Fungsi untuk memeriksa apakah kalimat adalah palindrom
bool isPalindrome(const string& input)
{
    string cleanedInput;
    stack<char> charStack;

    // Normalisasi input: hapus spasi dan ubah ke huruf kecil
    for (char c : input)
    {
        if (!isspace(c)) // Abaikan karakter spasi
        {
            char lowerChar = tolower(c);
            cleanedInput += lowerChar;
            charStack.push(lowerChar);
        }
    }

    // Periksa apakah string asli sama dengan versi terbaliknya
    for (char c : cleanedInput)
    {
        if (c != charStack.top())
        {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main()
{
    string userInput;

    // Membaca input dari pengguna
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, userInput); // Mendukung input dengan spasi

    // Output hasil
    if (isPalindrome(userInput))
    {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    }
    else
    {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}
