#include<stdio.h>

int main(){
    int a;
    int shift;
   
    scanf("%d",&a);
    scanf("%d",&shift);
    int c;
    c = a >> shift;
    printf("%d",c);
    return 0;
}