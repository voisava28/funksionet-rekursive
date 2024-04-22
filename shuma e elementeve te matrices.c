#include <stdio.h>

#define MAX_M 100
#define MAX_N 100

int shuma_matrice(int matrice[][MAX_N], int m, int n) {
    int shuma = 0;

    if (m == 0)
        return 0;

    for (int i = 0; i < n; i++)
        shuma += matrice[0][i];

    shuma += shuma_matrice(&matrice[1], m-1, n);

    return shuma;
}

int main() {
    int m, n;
    printf("Jepni numrin e rreshtave dhe kolonave te matrices: ");
    scanf("%d %d", &m, &n);

    int matrice[MAX_M][MAX_N];
    printf("Jepni elementet e matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    int shuma = shuma_matrice(matrice, m, n);
    printf("Shuma e elementeve te matrices eshte: %d\n", shuma);
    return 0;
}
