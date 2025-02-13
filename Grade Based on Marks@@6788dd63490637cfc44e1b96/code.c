#include<stdio.h>

int main(){
    int marks;
    scanf("%d",&marks);

    if(marks>=90){
        printf("A\n");
    }
     if(marks>=80 && marks<90){
        printf("B\n");
    }
     if(marks>=70 && marks<80){
        printf("C\n");
    }
     if(marks>=60 && marks<70){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
}