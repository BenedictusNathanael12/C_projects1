#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1) { printf("Stack penuh!\n"); return; }
    stack[++top] = val;
}

int pop() {
    if (top == -1) { printf("Stack kosong!\n"); return -1; }
    return stack[top--];
}

int peek() { return top == -1 ? -1 : stack[top]; }

int main() {
    push(5); push(10); push(15);
    printf("Top   : %d\n", peek());
    printf("Pop   : %d\n", pop());
    printf("Top sekarang: %d\n", peek());
    return 0;
}
