#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int>  arr={2,4,6,8,10,12};

    if (binary_search (arr.begin(), arr.end(), 7)){
         cout << "found!\n"; 
    }
   
    else cout << "not found.\n";

}