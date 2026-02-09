#include <stdio.h>
int main(){
int n,i,j,temp,swaps=0;

printf("enter the number of elements");
scanf("%d",&n);

int arr[n];
printf("fill the arrays values");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
 
//bubble sort

for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swaps++;
        
    }

   
    
    
}


} printf("the sorted array is :  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nnumber of swaps is: %d",swaps);

return 0;
}