// Bubble Sort

#include <stdio.h>
int main(){
    int arr[]={N
    int n=5;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
