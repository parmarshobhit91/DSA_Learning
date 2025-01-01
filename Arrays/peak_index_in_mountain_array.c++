#include<iostream>
using namespace std;
int main() {
    int arr[] = {0, 3, 8, 9, 5, 2};
    int size = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = size - 1;

    while ( start <= end ) {
        int mid = start + ( ( end - start ) / 2 );
        if ( arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1] ) { 
            cout <<  "Mid is present at : " << mid << endl; 
            break; }
        else if ( arr[mid-1] < arr[mid] )
            start = mid + 1;
        else
            end = mid - 1;
    }

}