#include<stdio.h>
#include<stdlib.h>
int str[1000005]={0};
int compare(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}
int main(){
    int n=0;
    while(scanf("%d",&n)==1){
        for(int i=1;i<=n;i++){
            scanf("%d",&str[i]);
        }
        int a=n/2;
        qsort(str,n,sizeof(int),compare);
        if(n%2==0){
            int b=str[a];
            int c=str[a+1];
            printf("%d",b);
            int count=0;
            for(int i=1;i<=n;i++){
                if(b<=str[i]&&str[i]<=c){
                    count++;
                }
            }
            printf(" %d",count);
            printf(" %d\n",c-b+1);
        }else{
            int b=str[a+1];
            printf("%d",b);
            int count=0;
            for(int i=1;i<=n;i++){
                if(str[i]==b){
                    count++;
                }
            }
            printf(" %d 1\n",count);
        }
    }
    return 0;
}