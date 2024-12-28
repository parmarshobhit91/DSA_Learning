#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr) / sizeof(int);
        int currSum = 0, maxSum = INT_MIN;
    for(int i=0; i<size; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0)
            currSum = 0;
    }
    cout << "Maximum sum of sub array is : " << maxSum << endl;
}