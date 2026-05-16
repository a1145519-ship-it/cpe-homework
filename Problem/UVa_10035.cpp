#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    int b=0;
    while(scanf("%d %d",&a,&b)==2){
        if(a==0&&b==0){
            break;
        }
        int count=0;
        int ok=0;
        while(a!=0||b!=0){
            int c=a%10;
            int d=b%10;
            if(c+d+ok>=10){
                count++;
                ok=1;
            }else {
                ok=0;
            }
            a=a/10;
            b=b/10;
        }
       if(count==0){
            printf("No carry operation.\n");
        }else if(count==1){
            printf("%d carry operation.\n",count);
        }else{
            printf("%d carry operations.\n",count);
        }
    }
     
    return 0;
}