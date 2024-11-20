#define MAX 100
#include <iostream>
#include <string>

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

    void print_stack()
    {
        if (is_empty())
        {
            std::cout << "Stack kosong" << '\n';
            return;
        }

        for (int i = top; i >= 0; i = i - 1)
        {
            std::cout << arr[i];
        }

        std::cout << '\n';
    }
};

int main() {
    std::string masukan_pengguna;
    std::cout << "Masukkan data untuk dibalik: ";
    std::getline(std::cin, masukan_pengguna);

    Stack yang_terbalik;

    for (int i = 0; i < masukan_pengguna.length(); i = i + 1) {
        char dari_akhir = masukan_pengguna[i];
        yang_terbalik.push(std::string(1, dari_akhir));
    }

    std::cout << "Hasil: ";
    yang_terbalik.print_stack();
}
