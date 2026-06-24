#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3],int rows,int col){
    int max=INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
            
        }
        
    }
    return max;
}

int findMin(int arr[][3],int rows,int col){
    int min=INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]<min)
            {
                min=arr[i][j];
            }
            
        }
        
    }
    return min;
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

    int maximum=findMax(arr,rows,col);
    int minimum=findMin(arr,rows,col);

    cout<<"maximum is "<<maximum<<endl;
    cout<<"minimum is "<<minimum<<endl;
}