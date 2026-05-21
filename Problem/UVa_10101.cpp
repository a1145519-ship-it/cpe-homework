#include <stdio.h>
#include<stdlib.h>
void bangla(long long n) {
    if (n >= 10000000) { 
        bangla(n / 10000000); 
        printf(" kuti");
        n %= 10000000;  
    }
    if (n >= 100000) { 
        if (n / 100000 > 0) printf(" %lld lakh", n / 100000);
        else printf(" lakh");
        n %= 100000;
    }
    if (n >= 1000) { 
        if (n / 1000 > 0) printf(" %lld hajar", n / 1000);
        else printf(" hajar");
        n %= 1000;
    }
    if (n >= 100) { 
        if (n / 100 > 0) printf(" %lld shata", n / 100);
        else printf(" shata");
        n %= 100;
    }
    if (n > 0) { 
        printf(" %lld", n);
    }
}

int main() {
    long long n;
    int count = 0;

    while (scanf("%lld", &n) != EOF) {
        count++;
        printf("%4d.", count); 
        
        if (n == 0) {
            printf(" 0\n");
        } else {
            bangla(n);
            printf("\n");
        }
    }
    return 0;
}