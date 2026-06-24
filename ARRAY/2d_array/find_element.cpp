#include<iostream>
using namespace std;

bool findElement(int arr[][3],int rows,int col, int key){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==key)
            {
                return true;
            }
        }
        
    }
    return false;    

}

int main(){

    int arr[3][3];
    int rows=3;
    int col=3;
    

    // input the 2d array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
            
        }
        
    }
    
     // row wise printing
    cout<<"row wise printing"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    // input the  key to search
    int key;
    cout<<"enter the key u want to search"<<endl;;
    cin>>key;

    bool search=findElement(arr,rows,col,key);
    if (search==1)
    {
        cout<<key<<" is found";
    }
    else{
        cout<<key<<" is not found";
    }
    
}
