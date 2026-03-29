#include <stdio.h>

struct User {
    char id[10];
    char role[15];
};

int main() {
    struct User u1 = {"USR01", "Admin"};
    struct User *ptr = &u1;

    printf("%-10s | %-15s\n", "ID", "ROLE");
    printf("--------------------------\n");
    printf("%-10s | %-15s\n", ptr->id, ptr->role);

    return 0;
}
