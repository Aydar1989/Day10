#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int input(int *a, int *n);
void sort(int *a, int n);
void output(int *a, int n);


int main() {
    int n = 0;
    int data[n];
    int x = input(data, &n);
    int m = malloc(n * sizeof(int));
    if (x == 1) {
        printf("n/a");
    } else {
        sort(data, n);
        output(data, n);
    }
    return 0;
}

int input(int *a, int *n) {
    int y, x;
    int z = 0;
    x = scanf("%d.%d", n, &y);
    if (x != 1 || *n <= 0 || *n > m)
    {
         z = 1;
    } else {
    for (int *p = a; p - a < m; p++) {
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
    printf("%d", *(a + n - 1));
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