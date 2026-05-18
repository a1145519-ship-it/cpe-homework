#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n=0;
    scanf("%d",&n);
    while(n--){
        int p=0;
        double c=0;
        int a=0;
        scanf("%d %lf %d",&p,&c,&a);
        if(c==0){
            printf("0.0000\n");
            continue;
        }
        double q=1-c;
        double count=0;
        count=(pow(q,a-1)*c)/(1-pow(q,p));
        printf("%.4f\n",count);
    }
    return 0;
}