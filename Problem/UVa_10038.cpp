#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int s1[3000]={0};
        int s2[3000]={0};
        for(int i=0;i<n;i++){
            scanf("%d",&s1[i]);
        }
        for(int i=0;i<n-1;i++){
            if(s1[i]>s1[i+1]){
                s2[i]=s1[i]-s1[i+1];
            }else{
                s2[i]=s1[i+1]-s1[i];
            }
        }
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2-i;j++){
                if(s2[j]>s2[j+1]){
                    int temp=s2[j];
                    s2[j]=s2[j+1];
                    s2[j+1]=temp;
                }
            }
        }
        int ok=1;
        for(int i=0;i<n-1;i++){
            if(s2[i]==i+1){
                ok=1;
            }else{
                ok=0;
                break;
            }
        }
        if(ok==1){
            printf("Jolly\n");
        }else if(ok==0){
            printf("Not jolly\n");
        }
    }
    return 0;
}