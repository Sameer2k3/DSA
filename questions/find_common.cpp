// if 3 sorted arrays are given so find the commoon elements in the all the 3 arrays
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a1{1,2,3,40,50,60,70,80,90,};
    vector<int> a2{2,10,13,20,40,80};
    vector<int> a3{16,20,20,35,40,80,135,245,365,};

    vector<int> ans;

    int i,j,k;
    i=j=k=0;

    while(i<a1.size() && j<a2.size() && k<a3.size()){
        
        if (a1[i]==a2[j] && a2[j]==a3[k]){

            ans.push_back(a1[i]);
            i++;
            j++;
            k++;

        }
        else if (a1[i]<a2[j])
        {
            i++;
        }
        else if (a2[j]<a3[k])
        {
            j++;
        }
        else{
            k++;
        }
        
        
        
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    



    

}