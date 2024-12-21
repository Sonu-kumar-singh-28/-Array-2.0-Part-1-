#include<iostream>
using namespace std;

int printarr( int arr[], int size)
{
    for( int i=0; i<size; i++)
    {
        cout<< "The Value Of The Array :" << arr[i] <<endl;
    }
    cout<< endl;
}

 
 void inc( int arr[], int size)
 {
    arr[0]= arr[0]+10;
    cout<< arr[0];
 }


int main()
{
    int arr[3]={2,4};
    int size =2;

    inc( arr,size);

    printarr( arr ,size);
} 