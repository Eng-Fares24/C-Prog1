#include <stdio.h>

int DecimalToBinary(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 2) + 10 * DecimalToBinary(n / 2);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary representation : %d", DecimalToBinary(num));
    return 0;
}