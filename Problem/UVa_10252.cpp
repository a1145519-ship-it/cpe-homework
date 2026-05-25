#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str1[1005];
    char str2[1005];
    while(fgets(str1,sizeof(str1),stdin)!=NULL){
        if(fgets(str2,sizeof(str2),stdin)==NULL){
            break;
        }
        int count1[26]={0};
        int count2[26]={0};
        int len1=strlen(str1);
        int len2=strlen(str2);
        for(int i=0;i<len1;i++){
            if(str1[i]>='a'&&str1[i]<='z'){
                count1[str1[i]-'a']++;
            }
        }
        for(int i=0;i<len2;i++){
            if(str2[i]>='a'&&str2[i]<='z'){
                count2[str2[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            int num=(count1[i]<count2[i])?count1[i]:count2[i];
            for(int j=0;j<num;j++){
                printf("%c",i+'a');
            }
        }
        printf("\n");
    }
    return 0;
}