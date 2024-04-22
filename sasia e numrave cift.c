#include <stdio.h>

int count_even_recursive(int vec[], int size, int index) {

    if (index == size)
        return 0;

    if (vec[index] % 2 == 0)
        return 1 + count_even_recursive(vec, size, index + 1);

    else
        return count_even_recursive(vec, size, index + 1);
}

int main() {
    int size;
    printf("Jepni madhesine e vektorit: ");
    scanf("%d", &size);

    int vec[size];
    printf("Jepni elementet e vektorit:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &vec[i]);
    }

    int count = count_even_recursive(vec, size, 0);
    printf("Numri i numrave cift ne vektor eshte: %d\n", count);
    return 0;
}
