#include<iostream>
#include<vector>
using namespace std;

int findSingleElement(vector<int> &nums) {
    int start = 0, end = nums.size()-1;

    if(nums.size() == 1)
        return nums[0];

    while (start <= end)
    {
        int mid = start + (( end - start) / 2 );

        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
        return nums[mid];

        if(mid % 2 == 0) {
            if(nums[mid] == nums[mid-1])
                end = mid - 2;
            else
                start = mid + 1;
        }
        else {
            if(nums[mid] == nums[mid-1])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    
}

int main() {
    vector<int> nums = {3,3,7,7,10,11,11};
    vector<int> nums1 = {1,1,2,3,3,4,4,8,8};
    vector<int> nums2 = {1};

    cout << "Single element in array is : " << findSingleElement(nums) << endl;
    cout << "Single element in array is : " << findSingleElement(nums1) << endl;
    cout << "Single element in array is : " << findSingleElement(nums2) << endl;
    return 0;
}