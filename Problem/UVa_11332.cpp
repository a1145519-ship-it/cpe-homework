#include<stdio.h>
#include<stdlib.h>
int main(){
    long long n=0;
    while(scanf("%lld",&n)!=EOF){
        if(n==0){
            break;
        }
        long long sum=0;
        long long t=0;
        while(n>=10){
            t=n;
            while(t>0){
                sum=sum+(t%10);
                t=t/10;
            }
            n=sum;
            sum=0;
        }
        printf("%lld\n",n);
    }
    return 0;
}