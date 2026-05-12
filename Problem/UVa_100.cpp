#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;
    int j=0;
    int temp=0;
    int max=0;
    while(scanf("%d %d",&i,&j)!=EOF){
        printf("%d %d ",i,j);
        if(i>j){
            temp=i;
            i=j;
            j=temp;
        }
        for(int k=i;k<j;k++){
            int a=k;
            int count=0;
            while(a!=1){
                if(a%2==0){
                    a=a/2;
                }else{
                    a=3*a+1;
                }
                count++;
            }
            if(count>max){
                max=count;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}