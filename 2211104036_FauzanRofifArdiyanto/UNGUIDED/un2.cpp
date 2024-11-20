#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk membalikkan seluruh kalimat
string reverseSentence(string sentence)
{
    stack<char> s;
    string reversed_sentence = "";

    // Masukkan setiap karakter kalimat ke dalam stack
    for (char c : sentence)
    {
        s.push(c);
    }

    // Ambil karakter dari stack untuk membangun kalimat terbalik
    while (!s.empty())
    {
        reversed_sentence += s.top();
        s.pop();
    }

    return reversed_sentence;
}

int main()
{
    string sentence;

    // Input kalimat dari pengguna
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, sentence);

    // Proses dan tampilkan hasil
    string reversed_sentence = reverseSentence(sentence);
    cout << "Datastack Array:" << endl;
    cout << "Data: " << reversed_sentence << endl;

    return 0;
}