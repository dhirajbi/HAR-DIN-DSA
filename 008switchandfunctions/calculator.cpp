#include<iostream>
using namespace std;
                  
int main(){
    int a, b;
    cout<<"enter first  num:";
    cin>>a;
    cout<<"enter second num:";
    cin>>b;

    char op ;
    cout<<"enter opration:"<<endl;
    cin>>op;

    switch(op){

        case '+':cout<<(a+b);
              break;
        case '-':cout<<(a-b);
              break;
        case '*':cout<<(a*b);
               break;
        case '/':cout<<(a/b);
               break;
        case '%':cout<<(a%b);
               break;
    }
    return 0;
}