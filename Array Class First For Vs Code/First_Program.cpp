#include<iostream>
using namespace std;

int main()
{
    // array declaration 

    // int arr[4]; // arrays declaration
    // int count[23]; // declaration
    // int char[106]; // declaration
    // bool arr[23]; // declaration



 // in this declaration in the top of as first int is a datatype and 
 // count is a varable name   and 
 // arr[23] is a  size of array  ; this is a terminator

//    cout<< arr << endl;
//    cout<<" Array Declaration successfully :" << &arr << endl;

   // array declaration


//    int arr[] = { 2,3,4,5,6,7,8,9};
//    int arr[10] = {2,4,5,6,7,8,9,9,2};

//    int arr[6] = { 2,3,4,5,5,6};
//    cout<<" Array inilitiation successfullyL: "<< endl;


 // index && Accessing Array


 //   indexing array are starts from zero 
//    int arr[10] = { 10,24,45,67,89,98,47,56};
// //    cout<< arr[1] << endl;

//   for( int index=0; index<5; index++)
//    {
//     cout<< arr[index] << endl;
//    }



// int arr[10];


// for( int index=0; index<10; index++)
// {
//     cout<<" Enter The  input values in Array: ";
//     cin>>arr[index];
// }
// // ptrintin the value of the array
// cout<< endl;
// for( int i=0; i<10; i++)
// {
    
//     cout<<" The Input Value Is: " << arr[i] <<endl;
// }
// cout<<" Array Printing Successfully:" << endl;



  int arr[10];

  for( int i=0; i<=10; i++)
  {
    cout<<"Enter The Input Values OF The Array: ";
    cin>>arr[i];
  }

//    Printing the input elements are given  

for( int j=0; j<=10; j++)
{
    cout << " The input values of Array is : " <<arr[j] << endl;
}

return 0;
}