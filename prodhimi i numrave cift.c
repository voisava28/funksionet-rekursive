#include <stdio.h>

int product_even(int n) {

    if (n == 0)
        return 1;

    else if (n % 2 == 0)
        return n * product_even(n-2);

    else
        return product_even(n-1);
}

int main() {
    int n;
    printf("Jepni nje numer: ");
    scanf("%d", &n);

    int product = product_even(n);
    printf("Prodhimi i numrave cift per %d kufizat e para cift eshte: %d\n", n, product);
    return 0;
}
