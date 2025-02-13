#include<stdio.h>

int main(){
    int a;
    int b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);

    if(a>0 || b<0){
        printf("True");
    }
   else if(a==b){
        printf("True");
    }
     else if(a<b){
        printf("True");
    }
    return 0;
}