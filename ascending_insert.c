#include <stdio.h>
int main(){
    int n,i,j,value;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter values in ascending order:\n");

    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d",&value);

    for (i=0; i<n; i++){
        if (value < arr[i]){
            break;
        }
    }

    for (j=n; j>i; j--){
        arr[j]=arr[j-1];
    }
    arr[i]=value;
    n++;

    printf("Present Array: ");
    for (i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
