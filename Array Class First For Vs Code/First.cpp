#include<iostream>
using namespace std;

void printarr(int arr[], int size)
{
    cout << endl;
    for (int j = 0; j < size; j++)
    {
        cout << "The Element Are Inserted: " << arr[j] << endl;
    }
    cout << endl;
}

void printinc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    cout << arr[0] << endl;
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter The Size Of The Array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "The Number Are Inserted: ";
        cin >> arr[i];
    }

    printarr(arr, n);
    printinc(arr, n);

    return 0;
}