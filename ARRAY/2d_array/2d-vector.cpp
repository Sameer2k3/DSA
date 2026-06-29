#include<iostream>
#include<vector>
using namespace std;

int main(){

    int row;
    cout<<"enter no. of rows";
    cin>>row;
    int col;
    cout<<"enter no. of coloums";
    cin>>col;

    int initialize;
    cout<<"what number to initialize the vector";
    cin>>initialize;


    vector<vector <int>> arr(row, vector<int> (col,initialize));
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
        
    }
}