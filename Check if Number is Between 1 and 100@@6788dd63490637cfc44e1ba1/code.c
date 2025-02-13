#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a>=1 && a<=100){
        printf("In Range\n",a);
    }
    else{
        printf("Out of Range\n",a);
        }
}