// searching element by element for the key value.

#include <iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    { 
        // liner search
        if(arr[i]==key){
            return true;
        }
          
    }  
     return false;  
}
int main(){
    
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<"Enter the key to be found";
    int key;
    cin>>key;

    if(find(arr,size,key)){
        cout<<"found the key"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
    
}