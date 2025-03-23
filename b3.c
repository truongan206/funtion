#include <stdio.h>

// Hàm đệ quy tính phần tử thứ n trong dãy Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Điều kiện cơ bản F(0) = 0
    } else if (n == 1) {
        return 1;  // Điều kiện cơ bản F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Đệ quy tính F(n)
    }
}

int main() {
    int n;
    
    printf("Nhập giá trị n: ");
    scanf("%d", &n);
    
    // Tính phần tử thứ n trong dãy Fibonacci
    int result = fibonacci(n);
    
    printf("Phần tử thứ %d trong dãy Fibonacci là: %d\n", n, result);
    
    return 0;
}
