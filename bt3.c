int* mallocArray(int n) {
    // Cấp phát mảng động gồm n phần tử kiểu int
    int* arr = (int*)malloc(n * sizeof(int));

    // Gán giá trị cho từng phần tử của mảng
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    return arr;
}
// Độ phức tạp không gian: O(n)
