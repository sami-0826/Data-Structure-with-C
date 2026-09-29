#include <stdio.h>
int main(){
    int n,i,j,position;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the numbers: \n");
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d",&position);

    if (position>=n){
        printf("Delete not possible!!!");
    }

    else
    {
        for (j=position+1; j<n; j++){
            a[j-1]=a[j];
        }
        n=n-1;

        printf("Updated Array: ");
        for (i=0; i<n; i++){
            printf("%d ",a[i]);
        }
    }
}
