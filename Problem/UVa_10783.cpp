#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=0;
        int b=0;
        scanf("%d %d",&a,&b);
        int count=0;
        while(a<=b){
            if(a%2==1){
                count=count+a;
                a++;
            }else{
                a++;
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}