#include<iostream>
using namespace std;

int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int size = sizeof(height) / sizeof(int);
    int start=0, end=0;
    int area = 0;

    for(int i=0; i<size; i++) {
        start = height[i];
        for(int j=i+1; j<size; j++) {
            end = height[j];
            int width = j - i;
            int h = min(height[i], height[j]);
            area = max(area, width*h);
        }
    }
    cout << area << endl;
}


/*
This can also be done with the help of two pointer approach
 int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int area = 0;
        while (start < end) {
            int w = end - start;
            int h = min(height[start], height[end]);
            area = max(area, w*h);
            height[start] < height[end] ? start++ : end--;
        }
        return area;
*/