#include<stdio.h>
#include<stdlib.h>
#define MAX_M 105
#define MAX_N 105
int M,N,Q;
char grid[MAX_M][MAX_N];
int check(int r,int c,int radius){
    char center=grid[r][c];
    int top=r-radius;
    int bottom=r+radius;
    int left=c-radius;
    int right=c+radius;
    if(top<0||bottom>=M||left<0||right>=N){
        return 0;
    }
    for(int j=left;j<=right;j++){
        if(grid[top][j]!=center||grid[bottom][j]!=center){
            return 0;
        }
    }
    for(int j=top;j<=bottom;j++){
        if(grid[j][right]!=center||grid[j][left]!=center){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&M,&N,&Q);
        printf("%d %d %d\n",M,N,Q);
        for(int i=0;i<M;i++){
            scanf("%s",grid[i]);
        }
        for(int q=0;q<Q;q++){
            int r,c;
            scanf("%d %d",&r,&c);
            int radius=0;
            while(check(r,c,radius+1)){
                radius++;
            }
            int ans=radius*2+1;
            printf("%d\n",ans);
        }
    }
    return 0;
}