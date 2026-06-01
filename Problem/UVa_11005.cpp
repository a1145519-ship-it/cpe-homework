#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int cost[36];
        for(int j=0;j<36;j++){
            scanf("%d",&cost[j]);
        }
        printf("Case %d:\n",i);
        int b=0;
        scanf("%d",&b);
        while(b--){
            long long n=0;
            scanf("%lld",&n);
            int base[37]={0};
            for(int c=2;c<=36;c++){
                long long d=n;
                if(d==0){
                    base[c]=cost[0];
                }
                while(d!=0){
                    base[c]=base[c]+cost[d%c];
                    d=d/c;
                }
            }
            long long min=base[2];
            for(int c=3;c<=36;c++){
                if(min>base[c]){
                    min=base[c];
                }
            }
            printf("Cheapest base(s) for number %lld:",n);
            for(int c=2;c<=36;c++){
                if(min==base[c]){
                    printf(" %d",c);
                }
            }
            printf("\n");
        }
        if(i<a){
            printf("\n");
        }
    }
    return 0;
}