#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data_value)
    {
        data = data_value;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    bool is_empty()
    {
        return top == nullptr;
    }

    void push(int x)
    {
        Node *new_node = new Node(x);
        new_node->next = top;
        top = new_node;
    }

    void pop()
    {
        if (is_empty())
        {
            std::cout << "Stack kosong" << '\n';
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (!is_empty())
        {
            return top->data;
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

        Node *current = top;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << '\n';
    }
};

int main()
{
    Stack tumpukanku;
    tumpukanku.push(3);
    tumpukanku.push(5);
    tumpukanku.push(7);
    tumpukanku.push(11);
    tumpukanku.push(13);
    tumpukanku.push(17);

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