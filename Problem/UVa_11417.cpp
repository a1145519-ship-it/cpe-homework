#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
    while(b!=0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            break;
        }else{
            int sum=0;
            for(int i=1;i<n;i++){
                for(int j=i+1;j<=n;j++){
                    sum=sum+gcd(i,j);
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}