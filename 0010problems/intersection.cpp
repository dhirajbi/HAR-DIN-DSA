#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int>&arr1,int n,vector<int>&arr2,int m){

    int i=0,j=0;
    vector<int> ans;
    while(i<n&&j<m){
        
        if(arr1[i]==arr2[j]){

            ans.Push_back(arr[i]);
            i++;
            j++;
        }
    }
    elseif(arr1[i]<arr2[j]){
        i++;
    }
    else{
        j++;
    }
    return ans;
}



int main(){
    

    return 0;
}