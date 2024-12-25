#include <iostream>
using namespace std;

int sumOfElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int productOfElements(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    return product;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);
    cout << "Sum is : " << sumOfElements(arr, size) << endl;
    cout << "Product is : " << productOfElements(arr, size) << endl;
    return 0;
}