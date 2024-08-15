#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int ans = 0;

    
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    
    for(int i = 1; i < arr.size(); i++) { 
        ans = ans ^ i;
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 1, 4, 3, 2}; 
    int duplicate = findDuplicate(arr);

    cout << "The duplicate element is: " << duplicate << endl;

    return 0;
}
