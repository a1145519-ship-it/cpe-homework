#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    while(n--){
        int a=0;
        int b=0;
        int s=0;
        int d=0;
        scanf("%d %d",&s,&d);
        if(d>s){
            printf("impossible\n");
        }else if((d+s)%2==1||(s-d)%2==1){
            printf("impossible\n");
        }else{
            a=(d+s)/2;
            b=(s-d)/2;
            if(b>a){
                int temp=b;
                b=a;
                a=temp;
            }
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}