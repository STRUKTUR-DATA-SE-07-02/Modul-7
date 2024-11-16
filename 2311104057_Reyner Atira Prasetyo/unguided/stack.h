#ifndef STACK_H
#define STACK_H

// Define the infotype as an integer
typedef int infotype;

// Define the Stack structure
typedef struct {
    infotype info[20]; // Array to store stack elements
    int top;           // Index of the top element
} Stack;

// Procedure prototypes
void createStack(Stack *S);
void push(Stack *S, infotype x);
void pushAscending(Stack *S, infotype x);
void getInputStream(Stack *S);
infotype pop(Stack *S);
void printInfo(const Stack *S);
void balikStack(Stack *S);

#endif // STACK_H