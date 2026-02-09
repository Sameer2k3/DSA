// global variable can be used anywhere in the same file
// local variable is used inside the function or loop   it is defined
#include <iostream>
using namespace std;
int main(){

    int a=78;   //global varibale
    for (int  i = 0; i < 5; i++)
    {
        int b=52;  //local variable
        
        cout<<b<<endl; 
    }
    



}