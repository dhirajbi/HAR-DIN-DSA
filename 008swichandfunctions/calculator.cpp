#include<iostream>
using namespace std;
                  
int main(){
    int a, b;
    cout<<"enter first  num:";
    cin>>a;
    cout<<"enter second num:";

    char op ;
    cout<<"enter opration:"
    cin>>op;

    swich(op){

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