#include "stack.h"
#include <iostream>
#include <sstream>

using namespace std;

/**
 * @brief Initializes the stack by setting the top index to -1.
 * 
 * @param S Pointer to the stack to be initialized.
 */
void createStack(Stack *S){
    S->top = -1;
}

/**
 * @brief Pushes an element onto the stack.
 * 
 * This function adds an element to the top of the stack. If the stack is full,
 * it prints an error message indicating a stack overflow.
 * 
 * @param S Pointer to the stack.
 * @param x The element to be pushed onto the stack.
 */
void push(Stack *S, infotype x){
    if (S->top == 19){
        cerr << "Error : Stack Overflow\n";
        return;
    }
    S->top++;
    S->info[S->top] = x;
}

/**
 * @brief Removes and returns the top element from the stack.
 * 
 * This function checks if the stack is empty. If it is, an error message is 
 * printed to the standard error stream and the function returns -1. Otherwise, 
 * it retrieves the top element from the stack, decrements the top index, and 
 * returns the retrieved element.
 * 
 * @param S Pointer to the stack from which the top element is to be removed.
 * @return infotype The top element of the stack if the stack is not empty, 
 *         otherwise -1.
 */
infotype pop(Stack *S){
    if (S->top == -1){
        cerr << "Error : Stack Underflow\n";
        return -1;
    }
    infotype x = S->info[S->top];
    S->top--;
    return x;
}

/**
 * @brief Prints the elements of the stack from top to bottom.
 * 
 * This function iterates through the stack from the top element to the bottom
 * and prints each element to the standard output.
 * 
 * @param S Pointer to the stack to be printed.
 */
void printInfo(const Stack *S){
    cout << "[TOP] : ";
    if (S->top == -1){
        cout << "Stack is Empty\n";
        return;
    } else {
        for (int i = S->top; i >= 0; i--){
        cout << S->info[i] << " ";
        }
        cout << "\n";
    }
    
}

/**
 * @brief Reverses the elements of the given stack.
 * 
 * This function takes a pointer to a stack and reverses the order of its elements.
 * It uses a temporary stack to hold the elements in reverse order and then assigns
 * the reversed stack back to the original stack.
 * 
 * @param S Pointer to the stack to be reversed.
 */
void balikStack(Stack *S){
    Stack temp; // Temporary stack to hold reversed elements
    createStack(&temp); // Initialize the temporary stack
    while (S->top != -1){
        push(&temp, pop(S)); // Pop from S and push to temp, so the elements are reversed
    }
    *S = temp; // Assign the reversed stack back to S
}

/**
 * @brief Pushes an element into the stack in ascending order.
 *
 * This function inserts an element into the stack while maintaining the stack's
 * elements in ascending order. If the stack is empty, the element is simply pushed
 * onto the stack. Otherwise, the function temporarily pops elements from the stack
 * until it finds the correct position for the new element, then pushes the new element
 * and restores the temporarily removed elements back onto the stack.
 *
 * @param S Pointer to the stack.
 * @param x The element to be pushed into the stack.
 */
void pushAscending(Stack *S, infotype x){
    if (S->top == -1){ // If the stack is empty, simply push the element
        push(S, x);
        return;
    }
    Stack temp; // Temporary stack to hold elements temporarily removed from S
    createStack(&temp); // Initialize the temporary stack
    while (S->top != -1 && S->info[S->top] < x){ // Find the correct position for x
        push(&temp, pop(S)); // Pop elements from S and push to temp until the correct position is found
    }
    push(S, x); // Push x to S
    while (temp.top != -1){
        push(S, pop(&temp)); // Restore the temporarily removed elements back to S
    }
}

/**
 * @brief Reads a stream of characters from the standard input and pushes digits onto the stack.
 *
 * This function continuously reads characters from the standard input until the Enter key is pressed.
 * If a digit character is encountered, it is converted to an integer and pushed onto the provided stack.
 *
 * @param S A pointer to the Stack where the digits will be pushed.
 */
void getInputStream(Stack *S) {
    char input;
    cout << "Masukan angka (press Enter to stop):\n";
    while (true) {
        input = cin.get();
        if (input == '\n') {
            break;
        }
        if (isdigit(input)) {
            push(S, input - '0'); // Convert char to int and push onto the stack
        }
    }
}