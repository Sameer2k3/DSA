#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arrA[]={1,2,9};
    int sizeA=3;
    int arrB[]={4,5,6,7};
    int sizeB=4;

    vector<int> ans;

    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(arrA[i]);
    }
    
    for (int i = 0; i < sizeB; i++)
    {
        ans.push_back(arrB[i]);
    }

    // print the new array
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


}