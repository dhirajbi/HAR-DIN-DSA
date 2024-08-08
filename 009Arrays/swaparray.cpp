#include<iostream>
using namespace std;

void reverse(int arr[],int n){

    int start =0;
    int end = n-1;

    while(start<=end){

        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}




void printArry(int arry[],int n){

    for(int i =0;i<n;i++){

        cout<<arry[i]<<" ";
    }
    cout<<endl;
}


int main(){
    
    int arry[5]={6,7,8,9,0};
    int brry[7]={4,7,34,87,90,2,1};

    reverse(arry,5);
    reverse(brry,7);


    printArry(arry,5);
    printArry(brry,7);

    

    return 0;
}