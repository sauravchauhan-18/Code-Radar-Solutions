#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("Freezing\n");
    }
    else if(a>0 && a==0){
        printf("Above Freezing\n");
        }
}