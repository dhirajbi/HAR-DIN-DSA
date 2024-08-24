#include<iostream>
#include<queue>
using namespace std;
                  
int main(){
    
    queue<string> q;

    q.push("dhiraj");
    q.push("ganesh");
    q.push("vishnu");

    cout<<"size before pop "<<q.size()<<endl;

    cout<<"First element "<<q.front()<<endl;

    q.pop();
    cout<<"size after pop "<<q.size()<<endl;

    return 0;
}