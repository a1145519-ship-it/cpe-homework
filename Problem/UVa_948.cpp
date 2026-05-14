#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int n=0;
    int fib[40]={0,1};
    int i=0;
    for(i=2;i<40;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%d",&n);
    while(n--){
        int num=0;
        bool flag=false;
        scanf("%d",&num);
        printf("%d = ",num);
        for(i=39;i>=2;i--){
            if(num>=fib[i]){
                num=num-fib[i];
                flag=true;
                printf("1");
            }else if(flag){
                printf("0");
            }
        }
        printf(" (fib)\n");
    }
    return 0;
}