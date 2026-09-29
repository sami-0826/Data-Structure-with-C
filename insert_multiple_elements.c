#include<stdio.h>
int main(){
    int n,m,i,j,pos,value;

    printf("Enter the size of element: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);

    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("How many elements do you want to insert? ");
    scanf("%d",&m);

    for (i=0; i<m; i++){
        printf("Enter position: ");
        scanf("%d",&pos);

        printf("Enter Value: ");
        scanf("%d",&value);

        if(pos > n){
            printf("Invalid Position!!!");
        }

        else {
            for (j=n; j>pos; j--){
                arr[j] = arr[j-1];
            }

            arr[pos]=value;
            n++;
        }
    }

    printf("The present array: ");
    for (i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
