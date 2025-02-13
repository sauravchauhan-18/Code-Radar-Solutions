#include<stdio.h>

int main(){
    int a;
    int b;
    
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>0 && b<0 || a,b==0 || a>b ){
        printf("True");
    }
    else if(a>b && b==0){
        printf("True");
    }
    return 0;
}