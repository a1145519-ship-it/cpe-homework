#include<stdio.h>
#include<stdlib.h>
int main(){
    int v=0;
    int t=0;
    while(scanf("%d %d",&v,&t)!=EOF){
        int s=0;
        s=2*v*t;
        printf("%d\n",s);
    }
    return 0;
}