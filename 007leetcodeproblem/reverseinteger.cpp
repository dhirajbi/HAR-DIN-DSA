#include<iostream>
using namespace std;
                  
int main(){
    
    int n;
    cin>>n;

    int ans = 0;
    while(n!=0){
        int digit = n % 10;
        if((ans > INTMAX_MAX/10) || (ans<INTMAX_MIN/10)){

           return 0;
         }
        ans = (ans *10)+digit;
        n = n/10;

    }
   cout<<ans;
    return 0;
}