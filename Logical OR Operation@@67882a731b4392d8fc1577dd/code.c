#include<stdio.h>

int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>0 || b<0){
        printf("True");
    }
     else if(a==b ){
        printf("False");
    }
     else if(a<b){
        printf("True");
    }
    else if(a==0 && b==0){
        printf("False")
    }
    return 0;
}




    