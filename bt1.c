#include <stdio.h>

int main() {
    int n = 5; // Giả sử n = 5 để chạy thử (bạn có thể nhập từ bàn phím nếu muốn)

    // Vòng lặp chạy n lần
    for (int i = 0; i < n; i++) {
        printf("Hello\n"); // Lệnh thực hiện O(1) mỗi lần lặp
    }

    return 0;
}

/*
Kết luận:
- Vòng lặp chạy từ 0 đến n - 1 => chạy n lần
- Mỗi lần thực hiện lệnh printf tốn O(1)
- Tổng thời gian: O(n)

=> Độ phức tạp thời gian (Time Complexity): O(n)
*/
