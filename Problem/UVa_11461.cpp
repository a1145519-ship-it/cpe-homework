#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    int b=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a==0&&b==0){
            break;
        }
        int count=0;
        for(int i=1;i<317;i++){
            if(i*i>=a&&i*i<=b){
                count++;
            }else if(i*i>b){
                break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}