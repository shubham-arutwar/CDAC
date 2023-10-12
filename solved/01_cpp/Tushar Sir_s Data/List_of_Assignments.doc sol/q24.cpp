#include <iostream>
using namespace std;

void minMax(int[], int);

int main()
{
    int arr[5];
    cout << "Enter 5 numbers in array" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "       > ";
        cin >> arr[i];
    }
    minMax(arr, sizeof(arr) / sizeof(arr[0]));
}

void minMax(int arr[], int size)
{
    int min = arr[0], max = arr[0];
    for (int i = 1; i < size; i++)
    {
        min = (min < arr[i] ? min : arr[i]);
        max = (max > arr[i] ? max : arr[i]);
    }
    cout << "Max val among 5 is : " << max << endl;
    cout << "Min val among 5 is : " << min << endl;
}