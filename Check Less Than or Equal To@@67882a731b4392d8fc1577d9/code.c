#include<stdio.h>

int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a<b){
        printf("True");
    }
    else if(a==b){
        printf("True");
    }
    else if(a!=b){
        printf("False");
    }
    else if(a>b){
        printf("True");
    }
    return 0;
}