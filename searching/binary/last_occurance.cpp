//  find the last occurance of a repeating element in a array
#include<iostream>
#include<vector>

using namespace std;

int lastOccurance(vector<int> arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        if (arr[mid]==target)
        {
            ans=mid;
            start=mid+1;
        }
        else if (arr[mid]>target)
        {   
            // search in left
            end=mid-1;
        }
        else if (arr[mid]<target)
        {
            // search in right  
            start=mid+1;
        }

        mid=start+(end-start)/2;
        
        
        
    }

    return ans; 
    
}

int main(){

    vector<int> arr{1,2,3,4,4,4,4,4,5,6};
    int target=4;

    int ans=lastOccurance(arr,target);

    cout<<"answer is "<<ans;


    return 0;
}