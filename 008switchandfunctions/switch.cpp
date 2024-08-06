#include<iostream>
using namespace std;
                  
int main(){
    int num =1;

    switch (num)
    {
    case 1:
        cout<<"first";
        break;
        
    case 2:
        cout<<"second";
        break;
    
    default:
       cout<<"default case";
       break;
    }
    return 0;
}