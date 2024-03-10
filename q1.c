#include<stdio.h>
int main(){
  int A[1000],n,printed[1000],nprinted,i,j;
  scanf("%d",&n);
  for(j=0;j<n;j++) scanf("%d",&A[j]);
  printed[0]=0;//from my existing solution this step is corrected since I initalized it twice
  nprinted=0;
  i=0;
  while(nprinted!=n){
    while(printed[i]!=0)i++;//I used "if"  which printed repeated solutions(permutations) in exam
    printf("(%d",i);
    printed[i]=1;
    nprinted++;
    j=A[i];
    while(A[j]!=A[i])//This condition is also giving the same output given that above too are as per answer key
    {
    printf("%d",j);
    printed[j]=1;
    nprinted++;
    j=A[j];
    }
    printf(")");
  }
  
  return 0;
}