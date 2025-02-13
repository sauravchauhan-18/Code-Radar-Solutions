#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int d;
    d = (a+b+c)/3.0;

    printf("Average: %d\n",(float)d);
    return 0;
}