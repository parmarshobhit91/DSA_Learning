#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int> &nums) {
    int n = nums.size();
    int mid=0, low=0, high=n-1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

void printArray(vector<int> &nums) {
    for(int value : nums) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    printArray(nums);
    sortArray(nums);
    printArray(nums);
    return 0;
}

// 0 0 0 0    1 1 1   ele. unsorted  2 2 2
// <----->    <--->   <----------->  <--->
// 0    l-1   l  m-1  m           h  h+1  n-1   