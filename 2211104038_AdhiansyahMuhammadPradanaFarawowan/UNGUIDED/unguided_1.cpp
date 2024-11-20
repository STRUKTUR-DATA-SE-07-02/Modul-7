#define MAX 100
#include <iostream>
#include <string>
#include <cctype>

class Stack
{
private:
    int top;
    std::string arr[MAX];

public:
    Stack() { top = -1; };

    bool is_full()
    {
        return top == MAX - 1;
    }

    bool is_empty()
    {
        return top == -1;
    }

    void push(std::string x)
    {
        if (is_full())
        {
            std::cout << "Stack penuh" << '\n';
            return;
        }

        arr[++top] = x;
    }

    void pop()
    {
        if (is_empty())
        {
            std::cout << "Stack kosong" << '\n';
            return;
        }

        top = top - 1;
    }

    std::string peek()
    {
        if (!is_empty())
        {
            return arr[top];
        }

        std::cout << "Stack kosong" << '\n';
        return "";
    }

    std::string at_index(int i) {
        return arr[i];
    }

    void print_stack()
    {
        if (is_empty())
        {
            std::cout << "Stack kosong" << '\n';
            return;
        }

        for (int i = top; i >= 0; i = i - 1)
        {
            std::cout << arr[i] << " ";
        }

        std::cout << '\n';
    }
};

int main() {
    std::string masukan_pengguna;
    Stack data_asli;
    Stack data_terbaik;

    std::cout << "Masukkan data untuk dicek palindromnya: ";
    std::getline(std::cin, masukan_pengguna);

    for (int i = 0; i < masukan_pengguna.length(); i = i + 1) {
        char dari_awal = std::tolower(masukan_pengguna[i]);
        char dari_akhir = std::tolower(masukan_pengguna[(masukan_pengguna.length() - 1) - i]);

        if (std::isspace(dari_awal) != 1) {
            data_asli.push(std::string(1, dari_awal));
        }

        if (std::isspace(dari_akhir) != 1) {
            data_terbaik.push(std::string(1, dari_akhir));
        }

        if (data_terbaik.peek() != data_asli.peek()) {
            std::cout << "Bukan palindrom" << '\n';
            return 0;
        }
    }

    std::cout << "Betul ini palindrom" << '\n';
    return 0;
}
