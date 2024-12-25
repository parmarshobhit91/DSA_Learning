#include<iostream>
using namespace std;

void change_array(int arr[], int size) {
    for(int i=0; i<size; i++) {
        arr[i] = 2*arr[i];
    }
}
int main() { 
    int arr[3] = {1, 2, 3};
    int size = 3;
    for(int i=0; i<size; i++) {
        cout << arr[i] << endl;
    }
    cout << "After calling change_array function" << endl;
    change_array(arr, 3);
    
    for(int i=0; i<size; i++) {
        cout << arr[i] << endl;
    }
}