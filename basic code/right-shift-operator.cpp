#include<iostream>
using namespace std;
int main(){
    // using right shift halves the value 
    int a =12;
    a= a >> 2; 
    // here the right shift is done twice so value will get divide by 2 two times
    cout<<a;
    cout<<endl;

    int b=13;
    b= b>> 1;
    cout<<b;
    cout<<endl;


    int c=-24;
    c= c>> 2;
    cout<<c;
}