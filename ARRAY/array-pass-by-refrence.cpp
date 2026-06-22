#include <iostream>
using namespace std;

void inc(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]=arr[i]+10;
    }
    
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={2,3};
    int size=2;

    inc(arr,size);
    printArray(arr,size);
}