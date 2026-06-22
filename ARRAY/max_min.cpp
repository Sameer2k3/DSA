// find the max and min value in the array

#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[]={1,92,34,46,50,680,79,85};
    int size=8;
    int max=INT_MIN;
    int min=INT_MAX;

    // max code
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max<<" is the greatest value in the array"<<endl;

    // min code
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<min<<" is the smallest value";

    
}