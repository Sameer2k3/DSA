#include<iostream>
using namespace std;
int main(){
    // using left shift doubles the value 
    int a =2;
    a= a << 2; 
    // here the lesft shift is done twice so value will get multiply by 2 two times
    cout<<a;

    cout<<endl;

    int b= -4;
    b= b << 2;
    cout << b;
}