#include <iostream>
#include <stack>
#include <sstream> // Untuk memisahkan kata dalam string
#include <algorithm> // Untuk fungsi reverse
using namespace std;

/**
 * @brief Fungsi untuk membalikkan huruf dalam kata.
 * 
 * This function takes a string as input and returns a new string
 * with the characters in reverse order.
 * 
 * @param word The string to be reversed.
 * @return A new string with the characters of the input word in reverse order.
 */
string reverseWord(string word) {
    reverse(word.begin(), word.end()); // Membalikkan huruf dalam kata
    return word;
}

/**
 * @brief Fungsi untuk membalikkan kalimat dan kata-kata di dalamnya.
 * 
 * This function takes a sentence as input, splits it into individual words, reverses the characters
 * in each word, and then reverses the order of the words in the sentence.
 * 
 * @param sentence The input sentence to be reversed.
 * @return A string containing the sentence with the order of words and characters in each word reversed.
 */
string reverseSentence(string sentence) {
    stack<string> wordStack; // Stack untuk menyimpan kata-kata
    stringstream ss(sentence); // Untuk memisahkan kata-kata
    string word, reversed = "";

    // Memasukkan kata-kata ke dalam stack setelah membalikkan huruf dalam setiap kata
    while (ss >> word) {
        wordStack.push(reverseWord(word)); // Balikkan huruf dalam kata dan simpan di stack
    }

    // Mengambil kata-kata dari stack dan membentuk kalimat terbalik
    while (!wordStack.empty()) {
        reversed += wordStack.top(); // Ambil kata teratas dari stack
        wordStack.pop(); // Hapus kata dari stack
        if (!wordStack.empty()) reversed += " "; // Tambahkan spasi jika masih ada kata
    }

    return reversed;
}

int main() {
    string input;
    cout << "Masukkan sebuah kalimat (minimal 3 kata): ";
    getline(cin, input);

    // Validasi panjang kalimat
    stringstream ss(input);
    int wordCount = 0;
    string temp;
    while (ss >> temp) {
        wordCount++;
    }

    if (wordCount < 3) {
        cout << "Kalimat harus memiliki minimal 3 kata!\n";
        return 1;
    }

    // Membalikkan kalimat dan huruf-huruf dalam kata
    string result = reverseSentence(input);
    cout << "Kalimat setelah dibalik: " << result << endl;

    return 0;
}
