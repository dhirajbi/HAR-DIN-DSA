#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid =s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){

            ans = mid;
            e = mid - 1;

        }
        else if(arr[mid]<key){

            s = mid + 1;

        }
        else if (arr[mid]>key){

            e = mid - 1;

        }

        mid = s + (e - s)/2;
    }

    return ans;
    
}

int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid =s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){

            ans = mid;
           s = mid + 1;

        }
        else if(arr[mid]<key){

            s = mid + 1;

        }
        else if (arr[mid]>key){

            e = mid - 1;

        }

        mid = s + (e - s)/2;
    }

    return ans;
    
}
                  
int main(){
    int arr[5]={1,2,3,4,5};

    cout<<"First ocuurance of 3 is :"<< firstOcc(arr,5,3)<<endl;
    cout<<"Last ocuurance of 3 is :"<< lastOcc(arr,5,3);
    return 0;
}