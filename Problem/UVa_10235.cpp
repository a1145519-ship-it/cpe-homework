#include<stdio.h>
#include<stdlib.h>
int main(){
    long long n=0;
    while(scanf("%lld",&n)!=EOF){
        if(n<=1){
            printf("%lld is not prime.\n",n);
            continue;
        }
        int ok=1;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                printf("%lld is not prime.\n",n);
                ok=0;
                break;
            }
        }
        if(ok==1){
            long long a=n;
            long long b=0;
            while(a!=0){
                b=b*10+(a%10);
                a=a/10;
            }
            if(b<=1||b==n){
                printf("%lld is prime.\n",n);
                continue;
            }
            for(long long i=2;i*i<=b;i++){
                if(b%i==0){
                    printf("%lld is prime.\n",n);
                    ok=0;
                    break;
                }
            }
            if(ok==1){
                printf("%lld is emirp.\n",n);
            }
        }
    }
    return 0;
}