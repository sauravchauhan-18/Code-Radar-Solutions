#include<stdio.h>

int fibonacci(int N){
    if(N==0) return 0;
    if(N==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int N;
    scanf("%d",&N);
    printf("fibonacci(N)",N); 
}