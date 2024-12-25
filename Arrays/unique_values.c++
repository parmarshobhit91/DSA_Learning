#include <iostream>
using namespace std;

void findUniqueValues(int arr[], int size, int result[], int &resultSize)
{
    resultSize = 0; 

    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            result[resultSize] = arr[i]; 
            resultSize++;               
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);

    int result[100] = {0}; 
    int resultSize = 0;    

    findUniqueValues(arr, size, result, resultSize);

    if (resultSize > 0)
    {
        cout << "Unique values in the array are: ";
        for (int i = 0; i < resultSize; i++)
        {
            cout << result[i] << " "; 
        }
        cout << endl;
    }
    else
    {
        cout << "No unique values found in the array." << endl;
    }

    return 0;
}
