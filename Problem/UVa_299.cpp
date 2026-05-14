#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    while(n--){
        int a=0;
        scanf("%d",&a);
        int train[50]={0};
        for(int k=0;k<a;k++){
             scanf("%d",&train[k]);
        }
        int count=0;
        for(int i=0;i<a-1;i++){
            for(int j=0;j<a-1-i;j++){
                if(train[j]>train[j+1]){
                    int temp=train[j];
                    train[j]=train[j+1];
                    train[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}