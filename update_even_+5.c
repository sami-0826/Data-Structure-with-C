#include<stdio.h>
int main(){
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the values: \n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for (int j=0; j<n; j++){
        if (arr[j]%2==0){
            arr[j]=arr[j]+5;
        }
    }

    printf("Updated Array: ");
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
