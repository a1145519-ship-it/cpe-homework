#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int count=0;
    char str[100]={0};
    while(fgets(str, 100, stdin)!=NULL){
        for(int i=0;i<strlen(str);i++){
            if(str[i]=='"'){
            if(count==0){
                printf("``");
                count=1;
            }else if(count==1){
                printf("''");
                count=0;
            }
            }else{
            putchar(str[i]);
            }
        }
    }
    return 0;
}