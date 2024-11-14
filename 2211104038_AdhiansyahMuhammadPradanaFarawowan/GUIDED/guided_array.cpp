#define MAX 100
#include <iostream>

class Stack
{
private:
    int top;
    int arr[MAX];

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

    void push(int x)
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

    int peek()
    {
        if (!is_empty())
        {
            return arr[top];
        }

        std::cout << "Stack kosong" << '\n';
        return -1;
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

int main()
{
    Stack tumpukanku;
    tumpukanku.push(10);
    tumpukanku.push(20);
    tumpukanku.push(30);

    std::cout << "Elemen-elemen tumpukan: ";
    tumpukanku.print_stack();

    std::cout << "Elemen teratas: " << tumpukanku.peek() << '\n';

    tumpukanku.pop();
    tumpukanku.pop();
    tumpukanku.pop();

    std::cout << "Elemen-elemen tumpukan setelah penghapusan: ";
    tumpukanku.print_stack();

    return 0;
}