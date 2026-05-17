#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    while(n--){
        int a=0;
        scanf("%d",&a);
        int str[505]={0};
        for(int i=0;i<a;i++){
            scanf("%d",&str[i]);
        }
        for(int i=0;i<a-1;i++){
            for(int j=0;j<a-1-i;j++){
                if(str[j]>str[j+1]){
                    int temp=str[j];
                    str[j]=str[j+1];
                    str[j+1]=temp;
                }
            }
        }
        int k=0;
        int count=0;
        k=str[(a/2)];
        for(int i=0;i<a;i++){
            if(str[i]>k){
                count=count+(str[i]-k);
            }else{
                count=count+(k-str[i]);
            }
        }
        printf("%d\n",count);
    }
    return 0;
}