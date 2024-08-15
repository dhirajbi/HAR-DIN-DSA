#include<iostream>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    int i = 0, j = 0;
    vector<int> ans;

    while(i < n && j < m) {
        if(arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]); // Corrected to arr1[i]
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]) { // Corrected `elseif` to `else if`
            i++;
        }
        else {
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5}; // Example input
    vector<int> arr2 = {3, 4, 5, 6, 7}; // Example input
    vector<int> result = findIntersection(arr1, arr1.size(), arr2, arr2.size());

    // Output the result
    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}
