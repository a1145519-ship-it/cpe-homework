#include<stdio.h>
#include<stdlib.h>
int main(){
    long long s=0;
    long long d=0;
    while(scanf("%lld %lld",&s,&d)!=EOF){
        if(s==0||d==0){
            break;
        }
        long long count=s;
        long long a=s;
        while(a<d){
            count++;
            a=a+count;
        }
        printf("%lld\n",count);
    }
    return 0;
}