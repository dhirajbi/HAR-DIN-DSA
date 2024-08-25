#include<iostream>
#include<deque>
using namespace std;
                  
int main(){
    
    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    cout<<"print First Index Element"<<d.at(1)<<endl;

    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    
    cout<<"Empty or Not"<<d.empty()<<endl;

    cout<<"before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;

    for(int i:d){
        cout<<i<<endl;
    }

    return 0;
}