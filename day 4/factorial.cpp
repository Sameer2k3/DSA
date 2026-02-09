#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number for factorial";
    int f=n;
    int d =n;
    for (int i = 1; i < n; i++)
    {
        
        d--;
        f=f*d;
    }
    cout<<f;
    
}