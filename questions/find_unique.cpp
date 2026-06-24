// in array every elements is repeated twice but one element is not , find that one.

#include <iostream>
#include <vector>
using namespace  std;

int findUniqueElements(vector<int> arr){
  int ans=0;
  for (int i = 0; i < arr.size(); i++)
  {
    ans=ans^arr[i];
  }

  return ans;
  
}

int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    //  array declaration
    vector<int> arr(n);

    // taking input for array

    for (int i = 0; i <arr.size(); i++)
    {
        cin>>arr[i];
    }

    int uniqueElements=findUniqueElements(arr);

    cout<<"unique elements is "<<uniqueElements<<endl;
    



}
