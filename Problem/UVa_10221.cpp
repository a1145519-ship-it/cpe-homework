#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    double s=0;
    double a=0;
    char str[10];
    const double PI=acos(-1.0);
    const double r=6440.0;
    while(scanf("%lf %lf %s",&s,&a,str)!=EOF){
        if(str[0]=='m'){
            a=a/60.0;
        }
        if(a>180){
            a=360-a;
        }
        double R=r+s;
        double i=a*PI/180.0;
        double x=R*i;
        double y=2.0*R*sin(i/2.0);
        printf("%.6f %.6f\n",x,y);
    }
    return 0;
}