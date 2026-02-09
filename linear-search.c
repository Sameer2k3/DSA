#include <stdio.h>
int main(){

int n,key,found=0;

printf("enter the number of elements");
scanf("%d",&n);

int arr[n];
printf("fill the arrays values :");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

printf("enter the element for searching:");
scanf("%d",&key);

//searching process
for (int i = 0; i < n; i++)
{
    if (arr[i]==key)
    {
        printf("the element is foound at the %dth position",i+1);
        found=1;
    }
    
}
if (!found)
{
    printf("the element is not present");
}

}