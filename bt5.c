#include <stdio.h>

// Hàm sắp xếp mảng số nguyên theo thứ tự tăng dần bằng Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Vòng lặp này sẽ đẩy phần tử lớn nhất lên cuối mảng sau mỗi lần lặp
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi nếu phần tử trước lớn hơn phần tử sau
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Độ phức tạp thời gian: O(n^2)

}

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mảng ban đầu: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Mảng sau khi sắp xếp: ");
    printArray(arr, n);

    return 0;
}

