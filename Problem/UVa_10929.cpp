#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char n[10000];
    while(scanf("%s",n)!=EOF){
        if(strcmp(n,"0")==0){
            break;
        }
       int num[10000];
       int len=strlen(n);
       for(int i=0;i<len;i++){
        num[i]=n[i]-'0';
        printf("%d",num[i]);
       }
       long long a=0;
       long long b=0;
       for(int i=0;i<len;i++){
        if(i%2==0){
            a=a+num[i];
        }else{
            b=b+num[i];
        }
       }
       if((b-a)%11==0){
        printf(" is a multiple of 11.\n");
       }else{
        printf(" is not a multiple of 11.\n");
       }
    }
    return 0;
}