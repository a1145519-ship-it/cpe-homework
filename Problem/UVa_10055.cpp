#include<stdio.h>
#include<stdlib.h>
int main(){
    long long a=0;
    long long b=0;
    long long c=0;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a>b){
            long long temp=b;
            b=a;
            a=temp;
        }
        c=b-a;
        printf("%lld\n",c);
    }
    return 0;
}