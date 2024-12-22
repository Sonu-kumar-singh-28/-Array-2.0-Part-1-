#include<iostream>
using namespace std;


int printarr( int arr[], int size)
{
    cout<< endl;
    for( int i=0; i<size; i++)
    {
    cout<< " The Inserted Element Is : " << arr[i] << endl;
    }
}

int printinc( int arr[] , int size)
{
    cout<< endl;
    for( int i=0; i<size; i++)
    {
    arr[i]= arr[i]+ 10;
    cout<< " The Increment Of The Array is: " << arr[i] << endl;
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int size;
    cout<<" Enter The Size  Of The Array :" ;
    cin>>size;
    cout<< endl;

    for( int i=0; i<size; i++)
    {
        cout<<" Enter The Element Of The Array : ";
        cin>>arr[i];
    }

    printarr( arr , size);
    printinc( arr , size);

}