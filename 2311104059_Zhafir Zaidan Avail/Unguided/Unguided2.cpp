#include <iostream>
#include <stack>
using namespace std;

// Fungsi untuk membalikkan seluruh kalimat
string reverseSentence(const string& input)
{
    stack<char> charStack;
    string result;

    // Masukkan setiap karakter ke dalam stack
    for (char ch : input)
    {
        charStack.push(ch);
    }

    // Bangun string terbalik dari stack
    while (!charStack.empty())
    {
        result += charStack.top();
        charStack.pop();
    }

    return result;
}

int main()
{
    string userInput;

    // Meminta input dari pengguna
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, userInput);

    // Membalikkan kalimat dan menampilkan hasil
    string reversedResult = reverseSentence(userInput);
    cout << "Data stack array:" << endl;
    cout << "Data: " << reversedResult << endl;

    return 0;
}
