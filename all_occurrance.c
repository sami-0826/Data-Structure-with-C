#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements: \n");
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int value;
    printf("Enter the value to delete: ");
    scanf("%d",&value);

    for (int i=0; i<n; i++){
        if (a[i]==value){
            for (int j=i; j<n-1; j++){
                a[j]=a[j+1];
            }
            i--;
            n--;
        }

    }
            printf("Updated Array: ");
        for (int i=0; i<n; i++){
            printf("%d ",a[i]);
        }
}
