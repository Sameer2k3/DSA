// find the first occurance of a repeating element in a array
#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    int answer=-1;

    while (start<=end)
    {
        if (arr[mid]==target)
        {
            answer=mid;
            end=mid-1;
        }

        else if (target>arr[mid])
        {
            start=mid+1;
        }
        else if (target<arr[mid])
        {
            end=mid-1;
        }
        
        mid=start+(end-start)/2;
        
        
    }
    
    return answer;
}

int main(){

    vector<int> arr{1,2,3,4,4,4,4,4,4,5,6};
    int target=4;  

    int indexOfFirstOccurance=firstOccurance(arr,target);

    cout<<"index is "<<indexOfFirstOccurance;
    
    return 0;


}