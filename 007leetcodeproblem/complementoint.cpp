#include<iostream>
using namespace std;
                  
int main(){
    int n;
   cin>>n;
   int m = n;
   int mask = 0;
   if(n==0){
    return 1;
   }

   while(m!=0){
    mask = (mask<<1)| 1;
    m = m>>1;
   }
  int answ = (~n) & mask ;

  cout<<answ;
    return 0;
}