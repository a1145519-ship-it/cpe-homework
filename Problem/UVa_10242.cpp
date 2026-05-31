#include<stdio.h>
#include<stdlib.h>
int main(){
    double a=0.0;
    double b=0.0;
    double c=0.0;
    double d=0.0;
    double e=0.0;
    double f=0.0;
    double g=0.0;
    double h=0.0;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h)!=EOF){
        double x=0.0;
        double y=0.0;
        if(c==e&&d==f){
            x=(a+g)-c;
            y=(b+h)-d;
        }else if(a==e&&b==f){
            x=(c+g)-a;
            y=(d+h)-b;
        }else if(a==g&&b==h){
            x=(c+e)-a;
            y=(d+f)-b;
        }else{
            x=(a+e)-c;
            y=(b+f)-d;
        }
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}