#include<iostream>
using namespace std;
int isAlreadyEntered(int arr[],int n);
main()
{
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int arr[n];
  
  if(n>0)
  {
  
  cout<<"Enter "<<n<<" numbers,one per line: "<<endl;
  for(int idx=0;idx<n;idx++)
  {
    cin>>arr[idx];
    if(arr[idx]==arr[idx-1])
        cout<<"Already Entered: "<<arr[idx]<<endl;
  }
  cout<<"Unique numbers entered: ";
  for(int idx=0;idx<n;idx++)
  {
    
    if(arr[idx]!=arr[idx-1])
        cout<<arr[idx];
  }
  }
  else
  {
    cout<<"Invalid Input!";
    return 0;
  }






}