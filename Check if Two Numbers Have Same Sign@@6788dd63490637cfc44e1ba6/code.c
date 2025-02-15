#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==-a && b==-b){
        printf("Same Sign\n");
    }
    else if(a==a && b==b){
        printf("Same Sign\n");
    } 
    else if((a==-a && b==b) || (a==a && b==-b)){
        printf("Different Sign\n");
    }
    return 0;

   
}