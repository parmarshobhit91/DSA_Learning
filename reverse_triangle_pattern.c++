#include <iostream>
using namespace std;

int main()
{
    int n=4;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j>=0; j--)
        {
            cout << j;

        }
        cout << endl;
    }
    return 0;
}
/*
Reverse Triangle Pattern
0
10
210
3210

Floyd's Triangle Pattern
1
23
456
78910

*/