#include<iostream>
using namespace std;
int main(){
   
    int n;
     cout<<"enter the marks";
     cin>>n;
     switch (n/10)
     {
        case 9: cout<<"A" ; break;
        case 8: cout<<"B" ; break;
        case 7: cout<<"C" ; break;
        case 6: cout<<"D" ; break;

        default :return 'F';break;
     }


    return 0;
}