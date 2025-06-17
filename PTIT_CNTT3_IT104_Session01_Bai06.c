#include <stdio.h>

// Hàm đếm số lần xuất hiện của phần tử x trong mảng arr
int countOccurrences(int arr[], int n, int x) {
    int count = 0;

    // Duyệt toàn bộ mảng và đếm nếu phần tử trùng x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    return count;

    // Độ phức tạp thời gian: O(n)
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int result = countOccurrences(arr, n, x);
    printf("Phan tu %d xuat hien %d lan trong mang.\n", x, result);

    return 0;
}

