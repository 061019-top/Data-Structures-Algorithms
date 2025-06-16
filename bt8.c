#include <stdio.h>

int timPhanTuNhieuNhat(int a[], int n) {
    int dem[1001] = {0};  // Mảng đếm số lần xuất hiện

    // Đếm tần suất
    for (int i = 0; i < n; i++) {
        dem[a[i]]++;
    }

    // Tìm phần tử có tần suất lớn nhất
    int maxDem = 0;
    int giaTri = -1;

    for (int i = 0; i <= 1000; i++) {
        if (dem[i] > maxDem) {
            maxDem = dem[i];
            giaTri = i;
        }
    }

    return giaTri;

    // Độ phức tạp thời gian: O(n)
}

int main() {
    int a[] = {5, 1, 3, 5, 2, 5, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    int kq = timPhanTuNhieuNhat(a, n);
    printf("Phan tu xuat hien nhieu nhat la: %d\n", kq);

    return 0;
}

