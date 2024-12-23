#include<iostream>
using namespace std;


int main()
{
    int arr[100];
    int size;
    int maxi=0;

    cout<<" Enter THe Size Of The Array:";
    cin>> size;


    for(int i=0; i<size; i++)
    {
        cout<<" Enter  The Element OF The Array:";
        cin>>arr[i];
    }


    for( int i=0; i<size; i++)
    {
        if( arr[i]>maxi)
        {
           maxi = arr[i];
        }
    }
    cout<< " The Maximum Number OF the Array Is: " << maxi << endl;

}