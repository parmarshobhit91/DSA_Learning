#include<iostream>
using namespace std;
int main() {
    int arr[5] = {5, 15, 3, -2, 8};
        int smallest = arr[0];
    for(int i=0; i<5; i++) {
        if(smallest > arr[i])
        smallest = arr[i];
    }
    
    cout << smallest;
    return 0;
}