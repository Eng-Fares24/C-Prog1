#include <stdio.h>

int GCD(int x, int y) {
    if (x < 0) x = -x;
    if (y < 0) y = -y;

    if (x == 0 && y == 0)
        return 0;
    else if (y == 0)
        return x;
    else
        return GCD(y, x % y);
}

int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("GCD is: %d", GCD(x, y));
    return 0;
}