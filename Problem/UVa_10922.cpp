#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char n[10000];
    while(scanf("%s",&n)!=EOF){
        if(n[0]=='0'){
            break;
        }
       int num[10000];
       int len=strlen(n);
       for(int i=0;i<len;i++){
        num[i]=n[i]-48;
        printf("%d",num[i]);
       }
       long long count=0;
       for(int i=0;i<len;i++){
        count=count+num[i];
       }
       long long ans=1;
       if (count % 9 == 0) {
            while(count!=9){
                long long a=count;
                count=0;
                while(a!=0){
                    count=count+(a%10);
                    a=a/10;
                }
                if(count%9==0){
                    ans++;
                }
            }
            printf(" is a multiple of 9 and has 9-degree %lld.\n", ans);
        }
        else {
            printf(" is not a multiple of 9.\n");
        }
    }
    return 0;
}