#include<stdio.h>
#include<stdlib.h>
int f[1000000];
int main(){
    long long x=0;
    while(scanf("%lld",&x)!=EOF){
        int i=0;
        char ch;
        while(scanf("%d",&f[i])==1){
            i++;
            ch=getchar();
            if(ch=='\n'||ch==EOF){
                break;
            }
        }
        long long power=1;
        int degree=1;
        long long count=0;
        for(int j=i-2;j>=0;j--){
            count=count+(long long)f[j]*power*degree;
            power=power*x;
            degree++;

        }
        printf("%lld\n",count);
    }
    return 0;
}