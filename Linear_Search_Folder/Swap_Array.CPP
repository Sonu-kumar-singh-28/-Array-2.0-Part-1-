#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    cout<<" Enter The Size OF The Array:";
    cin>>size;

    for( int i=0; i<size; i++)
    {
        cout<<" Enter The Element OF The Array:";
        cin>> arr[i];
    }
     int start =0;
    int end = size-1;

    while( start <= end)
    {
        swap( arr[start],arr[end]);
        start++;
        end--;
    }
    for( int i=0; i<size; i++)
    {
        cout<<arr[i];
    }

}