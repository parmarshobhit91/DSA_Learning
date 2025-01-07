#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2, int m, int n) {
    int idx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
            arr1[idx--] = arr1[i--];
        }
        else {
            arr1[idx--] = arr2[j--];
        }
    }

    while(j >= 0) {
        arr1[idx--] = arr2[j--];
    }
}

void printArray(vector<int> &arr1) {
    for(int i=0; i<arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> arr2 = {2,5,6};
    int n = 3;

    cout << "Array 1 before merge : ";
    printArray(arr1);
    cout << "Array 2 before merge : ";
    printArray(arr2);

    merge(arr1, arr2, m, n);

    cout << "Array after merge : ";
    printArray(arr1);
    return 0;
}