#include<stdio.h>
#include<stdlib.h>
int main() {
    int i = 0;
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        i++;
        int a[105] = { 0 };
        int is_increase=1;
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
            if(a[j]<1){
                is_increase=0;
            }
            if(j>0&&a[j]<=a[j-1]){
                is_increase=0;
            }
        }
        int c = 0;
        int b[6000] = { 0 };
        for (int j = 0; j < n; j++) {
            for (int k = j; k < n; k++) {
                c++;
                b[c] = a[j] + a[k];
            }
        }
        int ok = 1;
        if(is_increase==0){
            ok=0;
        }else{
            for (int j = 1; j <= c ; j++) {
                for (int k = j+1; k <= c; k++) {
                    if (b[k] == b[j]) {
                        ok = 0;
                        break;
                    }
                }
                if(ok==0){
                    break;
                }
            }
        }
        if (ok == 1) {
            printf("Case #%d: It is a B2-Sequence.\n\n", i);
        }
        else if (ok == 0) {
            printf("Case #%d: It is not a B2-Sequence.\n\n", i);
        }
    }
    return 0;
}