#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    while(n--){
        int d[3655]={0};
        int t=0;
        int a=0;
        scanf("%d",&a);
        scanf("%d",&t);
        while(t--){
            int p=0;
            scanf("%d",&p);
            for(int i=1;i<=a;i++){
                if(i%p==0){
                    d[i]=1;
                }
            }
        }
        for(int i=1;i<=a;i++){
            if(i%7==6||i%7==0){
                d[i]=0;
            }
        }
        int count=0;
        for(int i=1;i<=a;i++){
            if(d[i]==1){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}