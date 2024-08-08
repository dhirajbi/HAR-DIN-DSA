#include<iostream>
using namespace std;
                  

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternet(int arr[],int size){

    for(int i=0;i<size;i+=2){

        if (i+1<size){

            swap(arr[i],arr[i+1]);
        }
    }
}


int main(){
    

    int even[8]={7,4,0,8,55,33,77};
    int odd[5]={23,5,67,90,2};

    swapAlternet(even,8);
    printArray(even,8);

    cout<<endl;

    swapAlternet(odd,5);
    printArray(odd,5);



    return 0;
}