#include<iostream>
using namespace std;


int main()
{
    int arr[100];
    int n;
    cout<<" Enter THe Number you Wnt to INsert in  The Array :";
    cin>>n;

    for( int i=0; i<n; i++)
    {
        cout<<" ENter The Input Number Of The Array:";
        cin>>arr[i];
    }

   // printing the double of the array 
 cout<< endl;
    for( int j=0; j<n; j++)
    {
        cout<<" The Double Input  OF the Array Is : " << 2*arr[j] << endl;
    } 


    return 0;
}