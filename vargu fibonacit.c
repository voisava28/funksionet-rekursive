#include <stdio.h>

int fibonacci(int n) {

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int sum_fibonacci(int n) {

    if (n == 0)
        return 0;

    else if (n == 1)
        return 0;

    else if (n == 2)
        return 1;

    else
        return fibonacci(n-1) + sum_fibonacci(n-1);
}

int main() {
    int n;
    printf("Jepni nje numer: ");
    scanf("%d", &n);

    int sum = sum_fibonacci(n);
    printf("Shuma e %d kufizave te vargut te Fibonacit eshte: %d\n", n, sum);
    return 0;
}
