/* Given are N boards of length of each given in the form of array,
    and M painters, such that each painter takes 1 unit of time to
    paint 1 unit of the board.
    
    The task is to find the minimum time to paint all boards under
    the constraints that any painter will only painte continuous
    sections of boards.
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &nums, int n, int m, int maxAllowedTime) {
    int painters=1, time=0;
    for(int i=0; i<n; i++) {
        if(time + nums[i] <= maxAllowedTime) {
            time = time + nums[i];
        } else {
            painters++;
            time = nums[i];
        }
    }
    return painters <= m;
}

int timeToPaint(vector<int> &nums, int n, int m) {
    int sum  = 0, maxValue = INT_MIN, ans = -1;
    for(int i=0; i<n; i++) {
    sum = sum + nums[i];
    maxValue = max(maxValue, nums[i]);       
 }

    int start = maxValue, end = sum;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if(isPossible(nums, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {40,30,10,20};
    int n=4, m=2;

    cout << timeToPaint(nums, n, m) << endl;
    return 0;
}