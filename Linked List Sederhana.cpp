#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node pool[100];
int poolIdx = 0;

struct Node* buat(int data) {
    pool[poolIdx].data = data;
    pool[poolIdx].next = 0;
    return &pool[poolIdx++];
}

void tampil(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = buat(10);
    head->next = buat(20);
    head->next->next = buat(30);
    tampil(head);
    return 0;
}
