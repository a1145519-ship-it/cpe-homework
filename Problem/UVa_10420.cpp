#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 2005
typedef struct{
    char country[75];
    int num;
}play;
int main(){
    int n=0;
    scanf("%d",&n);
    char player[75];
    play play_list[max];
    for(int i=1;i<=n;i++){
        scanf("%s",play_list[i].country);
        play_list[i].num=1;
        fgets(player,sizeof(player),stdin);
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(strcmp(play_list[j].country,play_list[j+1].country)>0){
                char temp_player[75];
                strcpy(temp_player,play_list[j].country);
                strcpy(play_list[j].country,play_list[j+1].country);
                strcpy(play_list[j+1].country,temp_player);
                int temp=play_list[j].num;
                play_list[j].num=play_list[j+1].num;
                play_list[j+1].num=temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(play_list[i].num==0)continue;
        for(int j=i+1;j<=n;j++){
            if(strcmp(play_list[i].country,play_list[j].country)==0){
                play_list[i].num=play_list[i].num+play_list[j].num;
                play_list[j].num=0;
            }else{
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(play_list[i].num==0){
            continue;
        }
        printf("%s %d\n",play_list[i].country,play_list[i].num);
    }
    return 0;
}