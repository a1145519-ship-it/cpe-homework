#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int scent[55][55] = {0};
int main(){
    int x1=0;
    int y1=0;
    scanf("%d %d",&x1,&y1);
    int x2=0;
    int y2=0;
    char z=0;
    char s[105]={0};
    while(scanf("%d %d",&x2,&y2)!=EOF){
        scanf(" %c",&z);
        scanf("%s",s);
        int ok=1;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='R'){
                if(z=='E'){
                    z='S';
                }else if(z=='S'){
                    z='W';
                }else if(z=='W'){
                    z='N';
                }else if(z=='N'){
                    z='E';
                }
            }else if(s[i]=='L'){
                if(z=='E'){
                    z='N';
                }else if(z=='S'){
                    z='E';
                }else if(z=='W'){
                    z='S';
                }else if(z=='N'){
                    z='W';
                }
            }else if(s[i]=='F'){
                if(z=='E'){
                    x2++;
                }else if(z=='S'){
                    y2--;
                }else if(z=='W'){
                    x2--;
                }else if(z=='N'){
                    y2++;
                }
            }
            if(x2>x1||y2>y1||x2<0||y2<0){
                if(z=='E'){
                    x2--;
                }else if(z=='S'){
                    y2++;
                }else if(z=='W'){
                    x2++;
                }else if(z=='N'){
                    y2--;
                }
                if(scent[x2][y2]==1){
                    continue;
                }
                scent[x2][y2]=1;
                ok=0;
                break;
            }
        }
        if(ok==0){
            printf("%d %d %c LOST\n",x2,y2,z);
        }else if(ok==1){
            printf("%d %d %c\n",x2,y2,z);
        }
    }
    return 0;
}