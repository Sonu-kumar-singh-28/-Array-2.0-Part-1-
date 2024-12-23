#include<iostream>
using namespace std;
int main()
{
    int  arr[100];
    int size;

    cout<<" Enter THe Size OF the Array:";
    cin>>size;

    for( int i=0; i<size; i++)
    {
        cout<<" Entyer The Element Of The  Array: ";
        cin>>arr[i];
    }

    int start=0;
    int end = size-1;

    while( start<= end)
    {
        if( start > end)
        break;

    if( start == end)
    {
        cout<< arr[start] << " ";
    }
    else{
    cout<<arr[start] <<" ";
    cout<<arr[end] << " ";
    }
     start++;
    end--;
  }

}