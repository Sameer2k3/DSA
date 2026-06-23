#include <iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr={1,2,3,3,4,6,8};
    vector<int> brr={3,3,4,10};

    vector<int> ans;
    
    // outer loop of arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
            // inner loop for brr vector
            for (int j = 0; j < brr.size(); j++)
            {
                    if(element==brr[j]){
                        ans.push_back(element);
                        // mark the intersected element
                        brr[j]=-1;
                    }
            }
            
    }

    // printinf the intersected array
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}