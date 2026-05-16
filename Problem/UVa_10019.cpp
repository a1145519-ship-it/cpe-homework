#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    scanf("%d",&a);
    while(a--){
        int num=0;
        scanf("%d",&num);
        int count1=0;
        int b=num;
        while(b!=0){
            if(b%2==1){
                count1++;
            }
            b=b/2;
        }
        int c=num;
        int count2=0;
        while(c!=0){
            int k=c%10;
            c=c/10;
            while(k!=0){
                if(k%2==1){
                    count2++;
                }
                k=k/2;
            }
        }
        printf("%d %d\n",count1,count2);
    }
    return 0;
}