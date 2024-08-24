#include<iostream>
#include<stack>
using namespace std;
                  
int main(){
    
    stack<string> s;

    s.push("dhiraj");
    s.push("ganesh");
    s.push("vishnu");

    cout<<"Top Element->"<<s.top()<<endl;

    s.pop();
    cout<<"size of stack"<<s.size()<<endl;

    cout<<"Empty or not"<<s.empty()<<endl;


    return 0;
}