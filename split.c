#include<stdio.h>
int main(){
    int n;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    printf("Enter the inputs: \n");
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    if (n==0){
        printf("Splitting not possible!");
    }

    else {
        int j=0,k=0,even=0,odd=0;

        for (int i=0; i<n; i++){
            if (a[i]%2==0){
                b[j]=a[i];
                j++;
                even++;
            }
            else {
                c[k]=a[i];
                k++;
                odd++;
            }
        }

        printf("Array of Even Numbers: ");
        for(j=0; j<even; j++){
            printf("%d ",b[j]);
        }

        printf("Array of Odd Numbers: ");
        for(k=0; k<odd; k++){
            printf("%d ",c[k]);
        }
    }
}
