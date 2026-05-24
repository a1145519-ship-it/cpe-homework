#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char map[105][105]={'0'};
    int n=0;
    int m=0;
    int c=0;
    while(scanf("%d %d",&n,&m)!=EOF){
        if(n==0&&m==0){
            break;
        }
        if(c>0){
            printf("\n");
        }
        c++;
        memset(map,0,sizeof(map));
        for(int j=1;j<=n;j++){
            for(int i=1;i<=m;i++){
                scanf(" %c",&map[i][j]);
            }
        }
        printf("Field #%d:\n",c);
        for(int j=1;j<=n;j++){
            for(int i=1;i<=m;i++){
                int count=0;
                if(map[i][j]=='*'){
                    printf("*");
                    continue;
                }
                if(i>1&&j>1){
                    if(map[i-1][j-1]=='*'){
                        count++;
                    }
                }
                if(j>1){
                    if(map[i][j-1]=='*'){
                        count++;
                    }
                }
                if(i+1<=m&&j>1){
                    if(map[i+1][j-1]=='*'){
                        count++;
                    }
                }
                if(i>1){
                    if(map[i-1][j]=='*'){
                        count++;
                    }
                }
                if(i+1<=m){
                    if(map[i+1][j]=='*'){
                        count++;
                    }
                }
                if(i>1&&j+1<=n){
                    if(map[i-1][j+1]=='*'){
                        count++;
                    }
                }
                if(j+1<=n){
                    if(map[i][j+1]=='*'){
                        count++;
                    }
                }
                if(i+1<=m&&j+1<=n){
                    if(map[i+1][j+1]=='*'){
                        count++;
                    }
                }
                printf("%d",count);
            }
            printf("\n");
        }
    }
    return 0;
}