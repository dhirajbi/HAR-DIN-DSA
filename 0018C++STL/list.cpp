#include<iostream>
#include<list>
using namespace std;
                  
int main(){
    
    list<int>l;

    list<int>n(5,100);
    cout<<"printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_back(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list"<<l.size()<<endl;



    return 0;
}