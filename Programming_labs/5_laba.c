#include <stdio.h>  

int main() {

    int a[] = { 0, 3, 5, 7, 11, 13 };
    printf("%d %d %d %d %d %d\n\n", a[0], a[1], a[2], a[3], a[4], a[5]);

    int i, j;
    int b[2][2] = {1, 0, 1, 4};
    int c[2][2] = {1, 2, 0, 1};
    int k[2][2] = {0, 0, 0, 0};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            k[i][j] = b[i][0] * c[0][j] + b[i][1] * c[1][j];
        }
    }

    printf("%d %d\n%d %d", k[0][0], k[0][1], k[1][0], k[1][1]);
    
    return 0;
}
