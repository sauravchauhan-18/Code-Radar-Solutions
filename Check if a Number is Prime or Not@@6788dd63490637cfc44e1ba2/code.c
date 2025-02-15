#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a>1 && a%1==0 && a%a==0){
        printf("Prime\n",a);
    }
    else{
        printf("Not Prime\n");
    }
}