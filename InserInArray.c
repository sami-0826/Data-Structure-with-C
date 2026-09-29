#include <stdio.h>
int main(){
    int n,i,j,position,value;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int arr[n+1];

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter insert position: ");
    scanf("%d",&position);

    printf("Enter the insert value: ");
    scanf("%d",&value);

    if(position >=n){
        arr[n] = value;
    }

    else {
        for (j=n; j>position; j--){
            arr[j]=arr[j-1];
        }
        arr[j]=value;
    }

    printf("Updated Array: \n");

    for (i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
