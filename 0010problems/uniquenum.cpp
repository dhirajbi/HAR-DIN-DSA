#include<iostream>
#include<vector>
using namespace std;

    void FindUniquenum( vector<int>v,int n){

    int ans = 0;

        for(int i=0;i<n;i++){
            ans =ans^v[i];
        }
        cout<<ans;
    }


int main(){


vector<int>v;
int n;
cin>>n;
cout<<endl;

for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
}

for(int i=0 ;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
int p=v.size();
FindUniquenum(v,p);

    return 0;
}