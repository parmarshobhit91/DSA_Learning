#include<iostream>
using namespace std;
 
int main() {
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int size = sizeof(arr) / sizeof(int);
    int target = 9;

    int start = 0;
    int end = size-1;

    while(start <= end) {
    int mid = start + ((end - start) / 2);
        if(arr[mid] == target) {
            cout << "Target found" << endl;
            break;
        } 
        else if (arr[mid] < target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        
    }
}