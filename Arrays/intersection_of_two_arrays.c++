#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int arr3[], int &sizearr3, int sizearr1, int sizearr2 )
{
    sizearr3 = 0;
    for (int i = 0; i <sizearr1; i++)
    {
        for (int j = 0; j <sizearr2 ; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[sizearr3] = arr1[i];
                sizearr3++;
            }
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5 };
    int arr2[] = {4, 5, 6, 7};
    int arr3[100] = {0};
    int sizearr3 = 0;
    int sizearr1 = sizeof(arr1) / sizeof(arr1[0]);
    int sizearr2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Elements are : ";
    intersection(arr1, arr2, arr3, sizearr3, sizearr1, sizearr2);
    for (int i = 0; i < sizearr3; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}