#include <stdio.h>
int main()
{
    printf("enter n and k: ");
    int n,k,d=0;
    scanf("%d%d",&n,&k);
    
    int i,y,z;
    int arr[n],max,min,temp;
    max=10,min=0;

    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }



    while(max>min){

    max=arr[0];
    for(i=0;i<k;i++){
      if(arr[i]>max) {
        max=arr[i];
        y=i;
      }
    }

    min=arr[k];
    for(i=k;i<n;i++){
      if(arr[i]<min){
      min=arr[i];
      z=i;
      }
    }
if(max>min){
       temp=arr[y];
       arr[y]=arr[z];
       arr[z]=temp;
       d++;
    }

    else break;

    
   printf("after round %d:",d);
   for(i=0;i<n;i++){
    printf("%d",arr[i]);
   }

  }

return 0;
}


