#include<iostream>
using namespace std;

int peekIndex(int arr[],int n){

    int s = 0, e = n-1;

    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else{

            e = mid ;
        }

        mid = s + (e-s)/2;

    }
  return s;
}
                  
int main(){
    
    int arr[5]={1,2,3,5,1};
    cout<<"EnterPeekvalue:"<<peekIndex(arr,5)<<endl;
    return 0;
}