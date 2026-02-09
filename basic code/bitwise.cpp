#include<iostream>
using namespace std;
int main(){
    // and operator is used when both is true
    // or is used iin any one is correct
    // not operaor is used to transforom 0 in 1 anf 1 in 0
    // xot givrd xero when both id eqaul
    bool a =true;
    bool b=false;
    cout<<(a&b);
    cout<<endl;
    cout<<(a|b);
    cout<<endl;
    cout<<(~a);
    cout<<endl;
    cout<<(a^b);
    cout<<endl;
}