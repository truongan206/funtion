#include <stdio.h>

// Hàm tính x^y
int power(int x, int y) {
    int result = 1; // Khởi tạo kết quả là 1

    // Nếu y là số âm, thì sẽ tính 1 / (x^(-y))
    if (y < 0) {
        x = 1 / x;
        y = -y;
    }
    
    // Nhân x với chính nó y lần
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int main() {
    int x, y;
    
    printf("Nhập giá trị x: ");
    scanf("%d", &x);
    printf("Nhập giá trị y: ");
    scanf("%d", &y);
    
    // Gọi hàm power để tính x^y
    int result = power(x, y);
    
    printf("%d^%d = %d\n", x, y, result);
    
    return 0;
}
