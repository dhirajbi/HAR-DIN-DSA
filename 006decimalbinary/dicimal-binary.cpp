#include<iostream>
#include<math.h>
using namespace std;
                  
int main(){
    int n;
    cin>>n;

float answ = 0;
float i = 0;

while(n!=0){
    
float bit = n & 1;

answ = (bit * pow(10,i)) + answ;

n = n >> 1;

i++;
}

cout<<"answer is :"<<answ<<endl;

    return 0;
}