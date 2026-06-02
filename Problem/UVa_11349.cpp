#include<stdio.h>
#include<stdlib.h>
long long m[105][105];
int main(){
    int a=0;
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        long long n=0;
        scanf(" N = %lld",&n);
        int ok=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld",&m[i][j]);
                if(m[i][j]<0){
                    ok=0;
                }
            }
        }
        if(ok==1){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(m[i][j]!=m[n-1-i][n-1-j]){
                        ok=0;
                        break;
                    }
                }
                if(ok==0){
                    break;
                }
            }
        }
        if(ok==1){
            printf("Test #%d: Symmetric.\n",b);
        }else if(ok==0){
            printf("Test #%d: Non-symmetric.\n",b);
        }
    }
    return 0;
}