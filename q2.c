#include<stdio.h>
int main(){
    int n,i,j,sum=0,k,diff;
    char temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    char A[n];
    printf("Enter the character array: ");
    for(i=0;i<n;i++)
    {
    scanf("%c",&A[i]);
    }
    printf("Enter i and j: ");
    scanf("%d %d",&i,&j);
    diff=i-j;
    for(k=i;k<=j;k++){
        temp=A[j-k+i];
        A[j-k+i]=A[k];
        A[k]=temp;
    }
    for(i=0;i<n;i++)
    printf("%c",A[i]);
    return 0;
}