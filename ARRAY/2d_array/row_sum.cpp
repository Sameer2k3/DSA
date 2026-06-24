// print the sum of elements of each rows seprately
#include<iostream>
using namespace std;

void PrintRowSum(int arr[][3], int rows, int col){

    cout<<"printing the sum of rows elements"<<endl;
    for (int i = 0; i < rows; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"the sum of "<<i+1<<" row is "<<sum<<endl;
        
        
    }
    
}

int main(){

    int arr[3][3];
    int rows=3;
    int col=3;

    // input
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
     
    PrintRowSum(arr,rows,col);

}
