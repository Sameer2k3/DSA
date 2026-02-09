#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for (int row = 0; row < n; row++)
    {
       if (row==0 || row==n-1)
       {
        // priting solid line
        for (int star = 0; star < n; star++)
        {

            cout<<"*";
        }
        
           
        }
       else {
        // printing starting star in middle lines
        cout<<"*";
        // printing middle space
        for (int space = 0; space < n-2; space++)
        {
            cout<<" ";
        }
        // printing ending star in middle lines
        cout<<"* ";
        
        
       }
       cout<<endl;
       
        
    }
    
}