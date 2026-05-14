#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char string[105]={0};
    char s[105][105]={0};
    int j=0;
    int max=0;
    for(int i=0;i<105;i++){
        for(int k=0;k<105;k++){
            s[i][k]=' ';
        }
    }
    while(fgets(string,sizeof(string),stdin)!=NULL){
        int len=strlen(string);
        if(string[len-1]=='\n'){
            string[len-1]='\0';
            len--;
        }
        for(int i=0;i<len;i++){
            s[i][j]=string[i];
        }
        j++;
        if(max<len){
            max=len;
        }
    }
    for(int i=0;i<max;i++){
        for(int k=j-1;k>=0;k--){
            printf("%c",s[i][k]);
        }
        printf("\n");
    }
    return 0;
}