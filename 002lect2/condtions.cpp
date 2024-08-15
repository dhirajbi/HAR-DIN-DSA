#include <iostream>
using namespace std;
//*CONDITIONS *PATTERNS 
int main () {
    // how to get input value
    int  a;

    cin >> a;

    cout<<"value of n is:"<< a <<endl;

//simple if else statement

   if (a>0) {
        cout<<"a is positive"<<endl;
    }
    else{
        cout<<"a is negative"<<endl;
    } 
    
// using two intigers
  int b ,d ;
cout<<"Enter the value of b:"<<endl;
    cin>>b;

cout<<"Enter the value of d:" <<endl;
    cin>>d;

if (b>d){
    cout<< "B is grater"<<endl;
}
if (d>b){
    cout<<"A is greater"<< endl;

}
}