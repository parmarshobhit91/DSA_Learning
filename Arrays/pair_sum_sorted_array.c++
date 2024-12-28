#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i=0, j=n-1;
    while(i < j) {
        if( nums[i] + nums[j] < target ) {
            i++;
        }
        else if ( nums[i] + nums[j] > target ) {
            j--;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
}

int main() {

    vector<int> nums = {2,7,11,15};
    int target = 13;
     vector<int> ans = pairSum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}