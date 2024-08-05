#include<iostream>
using namespace std;
                  
int main(){
    int a = 1;
    int b = 2;

    if(a-->0 || ++b>2){
        cout<<"stage - inside If";
    }
    else{
        cout<<"stage - Iside else";
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}