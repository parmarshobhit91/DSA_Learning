#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int arr[], int size) {
    int maxSum = INT_MIN;
    for(int st=0; st<size; st++) {
        int currSum = 0;
        for(int end=st; end<size; end++) {
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = sizeof(arr) / sizeof(int);
    int res = maxSubarraySum(arr, size);
    cout << "Maximum subarray sum is : " << res << endl;
    return 0;
}