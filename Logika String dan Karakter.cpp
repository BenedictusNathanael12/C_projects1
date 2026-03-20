#include <stdio.h>

int isPalindrome(char str[]) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    while (right > left) {
        if (str[left++] != str[right--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[] = "malam";
    
    if (isPalindrome(word) == 1) {
        printf("Palindrom\n");
    } else {
        printf("Bukan Palindrom\n");
    }
    
    return 0;
}
