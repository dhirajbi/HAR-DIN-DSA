#include<iostream>
#include<array>
using namespace std;
                  
int main(){
    int basic[4]={1,2,3,4};
    array<int,4>a={1,2,3,4};

    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at second Index->"<<a.at(2)<<endl;

    cout<<"Empty or not->"<<a.empty()<<endl;

    cout<<"First Element->"<<a.front()<<endl;

    cout<<"last Element->"<<a.back()<<endl;


    return 0;
}