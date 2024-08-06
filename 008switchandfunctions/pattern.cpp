#include<iostream>
using namespace std;
                  
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    
}
i=1;
while(i<=n-1){
int j1 = 1;
while(j1<n-i+1){
cout<<"*";
j1++;
}

cout<<endl;
i++;
}

}

