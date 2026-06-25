#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,2};
    int size=sizeof(arr)/sizeof(int);
    int key;

    for (int i = 0; i < size; i++)
    {
        key=arr[i];
        for (int j = i+1; j < size; j++)
        {
            int sample=arr[j];
            if (key==sample)
            {
                cout<<sample<<" is the repeated element";
            }
            
        }
        
    }
    
}