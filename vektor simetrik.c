#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool is_symmetric(int vec[], int start, int end) {

    if (start >= end-1)
        return true;

    if (vec[start] != vec[end-1])
        return false;
    return is_symmetric(vec, start+1, end-1);
}

int main() {
    int size;
    printf("Jepni madhesine e vektorit: ");
    scanf("%d", &size);

    int vec[MAX_SIZE];
    printf("Jepni elementet e vektorit:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &vec[i]);
    }

    bool is_sym = is_symmetric(vec, 0, size);
    printf("Vektori %s simetrik.\n", is_sym ? "eshte" : "nuk eshte");
    return 0;
}
