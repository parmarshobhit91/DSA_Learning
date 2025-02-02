#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size=0;
    size = sizeof(arr) / sizeof(int);
    printArray(arr, size);
    cout << "After reversing : " << endl;
    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}