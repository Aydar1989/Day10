#include <math.h>
#include <stdio.h>
#define NMAX 10
#include <stdlib.h>

int input(int *a, int *n);
void sort(int *a, int n);
void output(int *a, int n);

int main() {
    int *data, n;
    data = (int *)malloc(NMAX * sizeof(int));
    int x = input(data, &n);
    if (x == 1) {
        printf("n/a\n");
    } else {
        sort(data, n);
        output(data, n);
    }
    free(data);
    return 0;
}

int input(int *a, int *n) {
    int y, x;
    int z = 0;
    x = scanf("%d.%d", n, &y);
    if (x != 1 || *n <= 0 || *n > NMAX) {
        z = 1;
    } else {
        for (int *p = a; p - a < *n; p++) {
            x = scanf("%d.%d", p, &y);
            if (x != 1) {
                z = 1;
            }
        }
    }
    return z;
}

void output(int *a, int n) {
    for (int *p = a; p - a < n - 1; p++) {
        printf("%d ", *p);
    }
    printf("%d\n", *(a + n - 1));
}

void sort(int *a, int n) {
    int x;
    for (int *p = a; p - a < n - 1; p++) {
        for (int *i = a; i - a < n - 1; i++) {
            if (*i > *(i + 1)) {
                x = *(i + 1);
                *(i + 1) = *i;
                *i = x;
            }
        }
    }
}
