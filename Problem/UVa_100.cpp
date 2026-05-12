#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main() {
    int i = 0;
    int j = 0;
    int temp = 0;
    while (scanf("%d %d", &i, &j) != EOF) {
        printf("%d %d ", i, j);
        int max = 0;
        if (i > j) {
            temp = i;
            i = j;
            j = temp;
        }
        for (int k = i; k <= j; k++) {
            int a = k;
            int count = 1;
            while (a != 1) {
                if (a % 2 == 0) {
                    a = a / 2;
                }
                else {
                    a = 3 * a + 1;
                }
                count++;
            }
            if (count > max) {
                max = count;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}