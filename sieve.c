#include <stdio.h>

int main(void) {
    int n = 1000000;
    int numli[1000000];
    for (int k = 0; k < n; k++) numli[k] = k;

    for (int i = 2; i * i < n; i++) {
        int a = 2;
        while (i * a < n) {
            numli[i * a] = -1;
            a += 1;
        }
    }

    int primec = 0;
    for (int j = 2; j < n; j++) {
        if (numli[j] != -1) primec++;
    }
    printf("%d\n", primec);

    return 0;
}