void printDouble(int n) {
    int i = 1;
    // Lặp khi i < n, và mỗi lần nhân i lên 2 => tăng theo lũy thừa 2
    while (i < n) {
        printf("%d\n", i); // In ra giá trị hiện tại của i
        i *= 2;            // Nhân i lên 2 sau mỗi vòng lặp
    }
}
// Độ phức tạp thời gian: O(log n)
