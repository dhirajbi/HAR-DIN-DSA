#include<iostream>
using namespace std;
                  
int binarySearch(int arr[],int size,int key){

    int start = 0;
    int end =size-1;

   int  mid = start + (end-start)/2;

   while(start<=end){

    if (arr[mid]==key){
        return mid;
    }
    if (key>arr[mid]){
        start = mid +1;
    }
    else{
        end = mid-1;
    }

    mid = start + (end-start)/2;
        
    }
    return -1;

   }



int main(){

    int even[6]={6,7,8,9,77,88};
    int odd[5]={3,5,7,9,80};

   int  evenindex = binarySearch(even,6,70);
   cout<<"evenINdex:"<<evenindex<<endl;

   int  oddindex= binarySearch(odd,5,31);
   cout<<"oddIndex:"<<oddindex<<endl;



    return 0;
}