#include<iostream>
using namespace std;

void transpose(int arr[][3],int rows, int col, int newArr[][3]){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            newArr[j][i]=arr[i][j];
        } 
    }  
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

    int newArr[3][3];

    transpose(arr,rows,col,newArr);
    cout<<"below is the transposed matrix"<<endl;
    
    // printing of transposed matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<newArr[i][j]<<" ";
        }
        cout<<endl;
        
    }

}