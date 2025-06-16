#include <stdio.h>

int coTrungLap(int a[], int n) {
    int dem[1001] = {0};  // Mảng đếm, kích thước cố định 1001

    for (int i = 0; i < n; i++) {
        if (dem[a[i]] > 0) {
            return 1;  // Có phần tử trùng
        }
        dem[a[i]]++;
    }

    return 0;  // Không có phần tử trùng

    // Độ phức tạp thời gian: O(n)
}

int main() {
    int a[] = {4, 7, 1, 9, 4};
    int n = sizeof(a) / sizeof(a[0]);

    if (coTrungLap(a, n)) {
        printf("Co phan tu trung lap trong mang.\n");
    } else {
        printf("Khong co phan tu trung lap trong mang.\n");
    }

    return 0;
}

