#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int get_value(char c){
    if(c>='0'&&c<='9')return c-'0';
    if(c>='A'&&c<='Z')return c-'A'+10;
    if(c>='a'&&c<='z')return c-'a'+36;
    return -1;
}
int main(){
    char s[10005]={0};
    while(fgets(s,sizeof(s),stdin)){
        long long sum=0;
        int max=1;
        int len=strlen(s);
        for(int i=0;i<len;i++){
            int val=get_value(s[i]);
            if(val!=-1){
                sum+=val;
                if(val>max){
                    max=val;
                }
            }
        }
        int found=0;
        for(int n=max+1;n<=62;n++){
            if(sum%(n-1)==0){
                printf("%d\n",n);
                found=1;
                break;
            }
        }
        if(found==0){
            printf("such number is impossible!\n");
        }
    }
    return 0;
}