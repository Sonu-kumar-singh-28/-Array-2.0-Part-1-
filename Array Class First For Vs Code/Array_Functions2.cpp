#include<iostream>
using namespace std;


void printarr( int arr[] , int size)
{
    for( int i=0; i<size; i++)
    {
        cout<<" The Input Array Is: "<< arr[i] << endl;
    }
}

int inc( int arr[], int size)
{
    for( int i=0; i<size ; i++)
    {
    arr[i] = arr[i]+10;
    cout << " The Increrment Array Of The Element Is:"<< arr[i] << endl;
    }
}

int main()
{
    int arr[2]= {2,3};
    int size = 2;

    printarr(arr, size);
    inc( arr, size);
}