#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char letter;
    int count;
}Alpha;
int main(){
    char string1[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char string2[]={"abcdefghijklmnopqrstuvwxyz"};
    int s[26]={0};
    int a=0;
    char str[100]={'0'};
    scanf("%d",&a);
    getchar();
    while(a--){
        fgets(str,sizeof(str),stdin);
        int len=strlen(str);
        for(int i=0;i<len;i++){
            for(int j=0;j<30;j++){
                if(str[i]==string1[j]||str[i]==string2[j]){
                    s[j]=s[j]+1;
                }
            }
        }
    }
    int max=0;
    Alpha n[26];
    for(int i=0;i<26;i++){
        n[i].letter=string1[i];
        n[i].count=s[i];
    }
    for(int i=0;i<26-1;i++){
        for(int j=0;j<26-1-i;j++){
            if(n[j+1].count>n[j].count){
                Alpha temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    for(int i=0;i<30;i++){
        if(n[i].count==0){
            break;
        }else{
            printf("%c %d\n",n[i].letter,n[i].count);
        }
    }
    return 0;
}