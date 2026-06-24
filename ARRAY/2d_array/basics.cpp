#include<iostream>
using namespace std;

int main(){

    // initialization
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int arr[2][3];
    int rows=2;
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

     // couloum wise printing
    cout<<"coloum wise printing"<<endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        
    }
    
    

    return 0;
}