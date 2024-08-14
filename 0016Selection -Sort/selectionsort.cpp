#include<iostream>
#include<vector>
using namespace std;
                  
void selectionSort(vector<int>v ,int n){

   
    for(int i = 0;i<n-1;i++){

         int minIndex = i;

        for(int j = i+1;j<n;j++){
            
            if(v[j]<v[minIndex])

                minIndex = j;
            swap(v[minIndex],v[i]);

        }
    }
}



int main(){
vector<int>v;
v[]={2,4,3,56,5};
int n;
n=v.size();
cout<< selectionSort(v,n);

cout<<endl;
return 0;
}