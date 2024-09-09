#include<iostream>
#include<vector>
using namespace std;

void MoveZeroes(vector<int>&num){
    int nonzero = 0;

    for(int j = 0 ; j<num.size(); j++){
        if(num[j]!=0){
            swap(num[j],num[nonzero]);
            nonzero++;
        }
    }
}
 void print(vector<int> & ans) {

    for(int i = 0 ;i<ans.size();i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
    
 }
 
int main(){
    
    vector <int> v;
    int size = 5;

    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(7);
    v.push_back(8);

    MoveZeroes(v);
    print(v);



    return 0;
}