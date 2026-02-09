#include <iostream>
using namespace std;
int main(){

    int arr[5]; //declaration of array

    for (int i = 0; i < 5; i++)
    {
        cout<<"give input:";
        cin>>arr[i]; //taking input from user
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    for (int i = 0; i < 5; i++)
    {
       int a=arr[i]*2;
       arr[i]=a;
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}