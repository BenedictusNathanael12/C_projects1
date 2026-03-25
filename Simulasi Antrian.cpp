#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) { printf("Antrian penuh!\n"); return; }
    if (front == -1) front = 0;
    queue[++rear] = val;
    printf("%d masuk antrian\n", val);
}

int dequeue() {
    if (front == -1 || front > rear) { printf("Antrian kosong!\n"); return -1; }
    return queue[front++];
}

void tampil() {
    if (front == -1 || front > rear) { printf("Antrian kosong!\n"); return; }
    printf("Isi antrian: ");
    for (int i = front; i <= rear; i++)
        printf("[%d] ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    tampil();

    printf("\nDequeue: %d\n", dequeue());
    printf("Dequeue: %d\n", dequeue());

    printf("\n");
    tampil();

    return 0;
}
