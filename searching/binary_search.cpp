// for binary search, array must be sorted
// mid=s+(e-s)/2  --->> this avoids the integer overflow

#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    
    int mid=start+(end-start)/2;
    while (start<=end)  
    {
        int element=arr[mid];

        if (element==target)
        {
            return mid;

        }
        else if (target<element)
        {
            // search left
            end=mid-1;

        }
        else{
            start=mid+1;
        }

        mid=start+(end-start)/2;
        
        
    }
    
    return -1;
    
}

int main(){

    int arr[]={2,4,6,8,10,12};
    int size=sizeof(arr)/sizeof(int);
    int target=40;
    
    int targetIndex=BinarySearch(arr,size,target);

    if (targetIndex==-1)
    {
        cout<<"target is not found in the array";
    }
    else{
        cout<<"target found at "<<targetIndex<<" index";
    }
    
    

    return 0;
}