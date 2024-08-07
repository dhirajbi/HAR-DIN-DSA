#include<iostream>
using namespace std;


void printArray(int arr[],int size){

    cout<<"printing the array"<<endl;

   for(int i=0; i<size; i++){
    cout<< arr[i]<<" ";
   }
}
                  
int main(){

    //declare
    int number[15];

    //access an array
    cout<<"value at 14 idex  :"<<number[14]<<endl;


  int array[3]={2,6,7};
  cout<<"value at 2 idex: "<<array[2]<<endl;

    cout<<"Everything is fine" <<endl<<endl;
 
  int third[15] ={5, 7,11};

   int n =10;

     int fourth[10]={0};
   cout<<"printing the array"<<endl;

   for(int i=0; i<n; i++){
    cout<< fourth[i]<<" ";
   }
   cout<<endl;

   int thirdsize = sizeof(third)/sizeof(int);
   cout<<"size of third is "<<thirdsize<<endl;


  printArray(third,15);

 

    return 0;
}