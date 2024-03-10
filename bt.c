#include <stdio.h>


int main()

{ int n,k;
 printf("Enter the value of n and k: ");
 scanf("%d %d",&n,&k);//such that k<n
 int A[n],i,maxindex,minindex,temp;
 printf("Enter the values of array elements: ");
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 int max=A[0],min=A[k];
 int round=1;
 do{
 max=A[0];
 for(i=0;i<=(k-1);i++){
 if(A[i]>max) 
 {
     max=A[i];
     maxindex =i;
}
 }
 min =A[k];
 for(i=k;i<n;i++){
 if(min>A[i]) {
     min=A[i];
     minindex=i;
 }
 }
 if(max>min)
 {   temp=A[maxindex];
     A[maxindex]=A[minindex];
     A[minindex]=temp;
 }
 printf("After round_%d: ",round);
 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");
 round++;
 }
 while(max>=min);
 printf("No more swaps left");
 return 0;
}