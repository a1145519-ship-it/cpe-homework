#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[1005]={0};
    int first_case=1;
    while(fgets(str,sizeof(str),stdin)){
        if(!first_case){
            printf("\n");
        }first_case=0;
        int n=strlen(str);
        int a[1005]={0};
        char b[1005]={0};
        int num=0;
        for(int i=0;i<n;i++){
            if(str[i]=='\n'||str[i]=='\r'){
                continue;
            }
            int ok=0;
            for(int j=0;j<num;j++){
                if(str[i]==b[j]){
                    a[j]++;
                    ok=1;
                    break;
                }
            }
            if(ok==0){
                b[num]=str[i];
                a[num]=1;
                num++;
            }
        }
        int c=num;
        for(int i=0;i<c;i++){
            for(int j=0;j<c-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    char t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                }else if(a[j]==a[j+1]){
                    if(b[j]<b[j+1]){
                        char t=b[j];
                        b[j]=b[j+1];
                        b[j+1]=t;
                    }
                }
            }
        }
        for(int i=0;i<c;i++){
            printf("%d %d\n",b[i],a[i]);
        }
    }
    return 0;
}