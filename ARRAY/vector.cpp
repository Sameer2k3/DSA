#include <iostream>
#include <vector>
using namespace std;

int main(){

    // create vector
    vector<int> arr;

    // int ans=(sizeof(arr)/sizeof(int));
    // cout<<ans<<endl;

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    
    // printing the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    // delete elements/pop
    arr.pop_back();

    // printing the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    vector<int> brr(10);

    cout<<"the size of brr is "<<brr.size()<<endl;

    // printing the array
    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i]<<" ";
    }

    cout<<endl;

    // initialization of array
    vector<int> crr{10,20,30,40,50};
    cout<<"size of crr is "<<crr.size()<<endl;
    cout<<"capacity of crr is "<<crr.capacity()<<endl;
     // printing the crr
    for (int i = 0; i < crr.size(); i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}