// move all negative numbers to the left side of an array,(order of numbres is not neccessary), use dutch national flag algorithm/ 2 pointer approach

#include<iostream>
using namespace std;

void moveAllNegToLeft(int*arr, int size){

    int low=0;
    int high=size-1;
 
      
    while (low<high)
    {
        if (arr[low]<0)
    {
        low++;
    }
    else if(arr[high]>0)
    {
        high--;
    } 
    else{
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    }
}

int main(){

    int arr[]={1,2,-3,4,-5,6,7,-8};
    int size=sizeof(arr)/sizeof(int);

    // printing the unarranged array
    cout<<"unarranges array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"size of the array is "<<size<<endl;

   
   
    
    moveAllNegToLeft(arr,size);

    // printing the new array
    cout<<"arranged array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}

