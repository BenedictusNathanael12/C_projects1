#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int hasil = binarySearch(arr, n, target);
    if (hasil != -1)
        printf("Ditemukan di indeks: %d\n", hasil);
    else
        printf("Tidak ditemukan\n");
    return 0;
}
