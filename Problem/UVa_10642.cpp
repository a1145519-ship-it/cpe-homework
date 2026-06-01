#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        long long x1=0;
        long long x2=0;
        long long y1=0;
        long long y2=0;
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        long long count1=0;
        long long count2=0;
        count1=(((x1+y1)*(x1+y1+1))/2)+x1;
        count2=(((x2+y2)*(x2+y2+1))/2)+x2;
        long long ans=count2-count1;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}