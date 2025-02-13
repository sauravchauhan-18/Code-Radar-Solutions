#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a,&b);

    if(a==b){
        printf("Equal\n");
    }
    else if(a>b){
        printf("First\n",a);
    }
    else if(b>a){
        printf("Second\n",b);
    }
}