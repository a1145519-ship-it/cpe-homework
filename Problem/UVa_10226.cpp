#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAx_tree 1000005
typedef struct{
    char species[35];
    float num;
}tree;
tree wood[MAx_tree];
int compare(const void*a,const void*b){
    return strcmp(((tree*)a)->species,((tree *)b)->species);
}
int main(){
    int n=0;
    if(scanf("%d%*c",&n)!=1)return 0;
    char blank[10];
    fgets(blank,sizeof(blank),stdin);
    while(n--){
        int i=1;
        while(fgets(wood[i].species,35,stdin)!=NULL){
            wood[i].species[strcspn(wood[i].species,"\n")]='\0';
            if(strlen(wood[i].species)==0){
                break;
            }
            i++;
        }
        int total=i-1;
        if(total==0)continue;
        for(int j=1;j<=total;j++){
            wood[j].num=1.0;
        }
        qsort(&wood[1],total,sizeof(tree),compare);
        for(int j=1;j<total;j++){
            if(wood[j].num==0)continue;
            for(int k=j+1;k<=total;k++){
                if(strcmp(wood[j].species,wood[k].species)==0){
                    wood[j].num=wood[k].num+wood[j].num;
                    wood[k].num=0;
                }else{
                    break;
                }
            }
        }
        for(int j=1;j<=total;j++){
            if(wood[j].num==0){
                continue;
            }
            printf("%s %.4f\n",wood[j].species,(wood[j].num*100.0)/total);
        }
        if(n>0){
            printf("\n");
        }
    }
    return 0;
}