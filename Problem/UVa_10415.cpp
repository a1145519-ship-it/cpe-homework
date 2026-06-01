#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    int finger;
    int count;
}song;
int main(){
    int t=0;
    scanf("%d",&t);
    getchar();
    while(t--){
        song a[15];
        for(int i=1;i<=10;i++){
            a[i].finger=0;
            a[i].count=0;
        }
        char s[205];
        fgets(s,sizeof(s),stdin); 
        int len=strlen(s);
        if(len>0&&s[len-1]=='\n'){
            s[len-1]='\0';
            len--;
        }
        for(int i=0;i<len;i++){
            if(s[i]=='c'){
                for(int j=1;j<=10;j++){
                    if(j>=2&&j<=4){
                        if(a[j].finger==0){
                        a[j].count++;
                        a[j].finger=1;
                        }
                    }else if(j>=7&&j<=10){
                        if(a[j].finger==0){
                        a[j].count++;
                        a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='d'){
                for(int j=1;j<=10;j++){
                    if(j>=2&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else if(j>=7&&j<=9){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='e'){
                for(int j=1;j<=10;j++){
                    if(j>=2&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else if(j==7||j==8){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='f'){
                for(int j=1;j<=10;j++){
                    if(j>=2&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else if(j==7){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='g'){
                for(int j=1;j<=10;j++){
                    if(j>=2&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='a'){
                for(int j=1;j<=10;j++){
                    if(j==2||j==3){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='b'){
                for(int j=1;j<=10;j++){
                    if(j==2){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='C'){
                for(int j=1;j<=10;j++){
                    if(j==3){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='D'){
                for(int j=1;j<=10;j++){
                    if(j>=1&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else if(j>=7&&j<=9){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='E'){
                for(int j=1;j<=10;j++){
                    if(j>=1&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else if(j==7||j==8){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='F'){
                for(int j=1;j<=10;j++){
                    if(j>=1&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else if(j==7){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='G'){
                for(int j=1;j<=10;j++){
                    if(j>=1&&j<=4){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='A'){
                for(int j=1;j<=10;j++){
                    if(j>=1&&j<=3){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }else if(s[i]=='B'){
                for(int j=1;j<=10;j++){
                    if(j==2||j==1){
                        if(a[j].finger==0){
                            a[j].count++;
                            a[j].finger=1;
                        }
                    }else{
                        a[j].finger=0;
                    }
                }
            }
        }
        for(int i=1;i<=10;i++){
            printf("%d",a[i].count);
            if(i<10){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
    return 0;
}