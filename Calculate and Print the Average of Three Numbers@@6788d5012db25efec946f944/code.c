#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("Average: %.2d\n",(float)(a+b+c)/3);
    return 0;
}