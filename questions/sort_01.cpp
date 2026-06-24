// sort the 0 and 1 in both sides of the array

#include <iostream>
#include <vector> 
using namespace std;

int main(){

    vector<int> arr{0,1,0,1,1,1,0,1,0,1};

    int start=0;
    int end=arr.size()-1;
    int i=0; 

    while (i!=end)      
    {
        if (arr[i]==0)
        {
            swap(arr[start],arr[i]);
            i++;
            start++;
        }

        else{
            swap(arr[end],arr[i]);
            end--;
        }
        
    }

    // printing the sorted array
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
    
    

}