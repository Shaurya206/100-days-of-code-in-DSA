// Insert an Element in an Array

#include<stdio.h>
int main(){

    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        printf("enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    int pos , num;
    printf("enter the position u want to enter a number :");
    scanf("%d",&pos);

    printf("enter the number you want to enter at that position :");
    scanf("%d",&num);

    for(int i = n ; i > pos - 1 ; i--){
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = num;
    n++;

    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}