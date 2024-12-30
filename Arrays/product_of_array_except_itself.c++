#include<iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,4};
    // int ans[4];
    // int product = 1;
    // for(int i=0; i<4; i++) {
    //     product = product * nums[i];
    // }

    // for(int i=0; i<4; i++) {
    //     ans[i] = (product / nums[i]);
    //     cout << ans[i] << " ";
    // }
// we can't do this because it will cause zero division error
// but we can use nested loops with if condition and multiplication operation

    //we can find the best solution on leetcode problem no. 238
    /*
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
    for(int i=1; i<n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i--) {
        suffix = suffix * nums[i+1];
        ans[i] = ans[i] * suffix;
    }
    return ans;
    */
    return 0;
}