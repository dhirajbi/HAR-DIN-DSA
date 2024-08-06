#include<iostream>
using namespace std;

int power(int num1,int num2) {
    int answ = 1;
    for(int i=1;i<=num2;i++){
        answ=answ * num1;
    }

    return answ;
}   

int main(){
    
int a,b;
cin>>a >>b;
int answ = power(a,b);
cout<<"answer is : "<<answ;

int c,d;
cin>>c>>d;
int ans= power(c,d);
cout<<"answer is : "<<ans;


    return 0;
}