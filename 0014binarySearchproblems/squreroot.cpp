#include<iostream>
using namespace std;

 int  SqrtInteger(int n){

     int s = 0;
     int e = n;
     int  mid = s+(e-s)/2;
     int ans = -1;
      
  
    while(s<=e){
    int square = mid*mid;
        if (square == n){
            return mid;
        }
        if(square<n){
            ans = mid;
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
}

 double morepricision(int n,int pricision,int temp){

    double factor = 1;
    double ans = temp;
    for(int i=0;i<pricision; i++){
       factor = factor/10;
    }
    for(double j=ans; j=j<n;j=j+factor){
        ans =j;
    }
    return ans;
 }


                  
int main(){

    int n;
    cout<<"Enter the number:" <<endl;
    cin>>n;

    int temp = SqrtInteger(n);
    cout<<"Answer is"<< morepricision(n,3,temp)<<endl;
    
    return 0;
}