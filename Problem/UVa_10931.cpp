#include<stdio.h>
#include<stdlib.h>
int main(){
    long long num=0;
    while(scanf("%lld",&num)!=EOF){
        if(num==0){
            break;
        }
        int string[100000];
        long long i=0;
        long long count=0;
        while(num!=0){
            if(num%2==1){
                count++;
            }
            string[i]=num%2;
            num=num/2;
            i++;
        }
        printf("The parity of ");
        for(int j=i-1;j>=0;j--){
            printf("%d",string[j]);
        }  
        printf(" is %lld (mod 2).\n",count);
    }
    return 0;
}