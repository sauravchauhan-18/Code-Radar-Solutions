// #include<stdio.h>

// int main(){
//     int a;
//     int b;
//     scanf("%d",&a);
//     scanf("%d",&b);

//     if(a>0 || b<0){
//         printf("True");
//     }
//      else if(a==b || -a==-b){
//         printf("False");
//     }
//      else if(a<b){
//         printf("True");
//     }
//     return 0;
// }



#include <stdio.h>

int main() {
    int a;
    int b;

    // Read two integers from the user
    printf("Enter two integers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    // Check conditions
    if (a > 0 || b < 0) {
        printf("True\n");
    } else if (a == b || -a == -b) {
        printf("False\n");
    } else if (a < b) {
        printf("True\n");
    } else {
        printf("No condition met\n"); // Optional: handle cases not covered
    }

    return 0;
}