#include<iostream>
using namespace std;
int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;
    int flag = 0;
    int index = -1;
    for(int i=0; i<7; i++) {
        if(target == arr[i])
        {
            index = i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Target not found." << endl;
    }
    else
    {
        cout << "Target found at index : " << index << endl;
    }
    return 0;
}