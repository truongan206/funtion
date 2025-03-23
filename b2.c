#include <stdio.h>

// Hàm đệ quy tính n!
int factorial(int n) {
    if (n == 0 || n == 1) { // Điều kiện cơ bản
        return 1;
    } else {
        return n * factorial(n - 1); // Gọi đệ quy
    }
}

int main() {
    int n;
    
    printf("Nhập giá trị n: ");
    scanf("%d", &n);
    
    // Tính giai thừa của n
    int result = factorial(n);
    
    printf("%d! = %d\n", n, result);
    
    return 0;
}
