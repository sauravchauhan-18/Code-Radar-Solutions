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
    
    // Taking input for three angles
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking if angles are positive and their sum is exactly 180
    if (a > 0 && b > 0 && c > 0 && (a + b + c) == 180) {
        printf("Valid Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}
