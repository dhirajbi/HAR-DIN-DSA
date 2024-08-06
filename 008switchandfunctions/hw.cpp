#include<iostream>
using namespace std;

int update(int a){
    a -= 5;
    return a;
}


int main(){
    
    int a = 15;
    int b = update(a);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}