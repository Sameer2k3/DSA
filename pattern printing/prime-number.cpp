#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int j=2;
    for (int  i = 0; i < n-2; i++)
    {
         if (n%j==0){
             cout<<"i is prime"; 
          break;
         }
    
         
    
         else j++;
    
    }
    
  

}