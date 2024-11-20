#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

string balikKata(string kata)
{
    stack<char> st;
    string hasil = "";

    // Push semua karakter ke stack
    for (char c : kata)
    {
        st.push(c);
    }

    // Pop karakter dari stack untuk mendapatkan kata terbalik
    while (!st.empty())
    {
        hasil += st.top();
        st.pop();
    }

    return hasil;
}

int main()
{
    string kalimat;
    stack<string> st_kata;

    cout << "Masukkan Kata : ";
    getline(cin, kalimat);

    // Hitung jumlah kata
    stringstream check(kalimat);
    string kata;
    int jumlah_kata = 0;

    while (check >> kata)
    {
        jumlah_kata++;
        // Balik setiap kata dan masukkan ke stack
        st_kata.push(balikKata(kata));
    }

    // Cek minimal 3 kata
    if (jumlah_kata < 3)
    {
        cout << "Error: Masukkan minimal 3 kata!" << endl;
        return 1;
    }

    cout << "Datastack Array : " << endl;
    cout << "Data : ";

    // Ambil kata dari stack dan tampilkan
    while (!st_kata.empty())
    {
        cout << st_kata.top() << " ";
        st_kata.pop();
    }
    cout << endl;

    return 0;
}
