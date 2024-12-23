// #include<iostreaM>
// using namespace std;

// int  find( int arr[], int size, int key)
// {
//     for( int i=0; i<size; i++)
//     {
//         if( arr[i] == key)
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     int arr[100];

//     int size;
  

//     cout<<" Enter The Size Of The Array : ";
//     cin>> size;

//     int key;
//     cout<<" Enter The Number you find: ";
//     cin>>key;
    
//     for( int i=0; i<size; i++)
//     {
//     cout<<" Enter The Element  the Array :";
//     cin>>arr[i];
//     }
//     if( find( arr, size, key))
//     {
//         cout<<" Founnd :";
//     } 
//     else{
//         cout<<" Not Found ";
//     }
    

// }



//  counting for zreos and one 

#include<iostream>
using namespace std;

// int printcount( int arr[], int size, int count)
// {
//     for( int i=0; i<size; i++)
//     {
//         if( arr[i] == 0 )
//         {
//             count++;
//             cout<< " The Number Of Zero Is: " << arr[i] << endl;
//         }
//         else if( arr[i] == 1)
//         {
//             count++;
//             cout<<" The Number Of onE Is :" << arr[i] << endl;
//         }
//         else{
//             cout<<" Invalid Number"<< endl ;
//         }
//     }
//     cout<< endl;
// }


int main()
{
    int arr[100];
   
    int size;
    cout<<" Enter The Size Of The Array : ";
    cin>> size;
    int  numzero =0;
    int numone = 0;

    cout<< endl;
    for( int i=0; i<size; i++ )
    {
        cout << " The Insert Element Is: ";
        cin>>arr[i];
    }
    cout<< endl;
    for( int i=0; i<size; i++)
    {
        if( arr[i] ==0)
        {
            numzero++;
        }
        if ( arr[i] == 1)
        {
            numone++;
        }
    }
    cout<<"  The Total Numzero Is: " << numzero << endl;
    cout<< " The Total Numone is: " << numone << endl;
    
}