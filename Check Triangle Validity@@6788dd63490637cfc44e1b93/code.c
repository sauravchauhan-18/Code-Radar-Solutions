// #include<stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);

//     if((a+b+c)==180){
//         printf("Valid\n");
//     }
//     else{
//         printf("Invalid\n");
//         }
//         return 0;
// }

#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input for three sides
    
    scanf("%d %d %d", &a, &b, &c);

    // Checking the Triangle Inequality Theorem
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
