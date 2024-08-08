#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0-;i<size;i++){

        if(arr[i] == key){
       
          return 1;

        }
    }
    return 0;
}






int main(){
    
    int arr[10]={2,-2,8,9,5,7,6,3,9,0};

    cout<<"Enter the element to search for"<<endl;

    int key;
    cin>>key;

    bool found  = search(arr,10,key );

    if(found){
        cout<<"key is present";
    }
    else{

        cout<<"key is absent";
    }
    return 0;
}