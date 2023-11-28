#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n]; //Take input from user
   // Declaration of array in different-different way
  //int arr[6]={1,2,3,4,5,6};
  // int arr[]={1,2,3,4,5,6};
  // int arr[6]={};
  for(int i=0 ; i<n ;i++)
{
  cin>>arr[i];
}
for(int i=0 ; i<n ;i++)
{
  cout<<arr[i];
}
}
