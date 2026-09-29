#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];

    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int position,value;

    printf("Enter the update position: ");
    scanf("%d",&position);

    printf("Enter the update value: ");
    scanf("%d",&value);

    if(position >= n){
        printf("Sorry! Update not Possible");
    }

    else {
        arr[position]=value;
    }

    printf("Here is The Updated Array: ");
    for (int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
