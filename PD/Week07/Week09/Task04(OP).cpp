#include<iostream>
using namespace std;

main()
{
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  
  if (n<=0)
  {
    cout<<"Invalid Input!";
    return 0;
  }
  
  
  
  if(n>0)
  {
  int elements[n];
  cout<<"Enter "<<n<<" numbers,one per line: "<<endl;
  
  for(int idx=0;idx<n;idx++)
  {
    cin>>elements[idx];
  }
  cout<<"Reverse Order: "<<endl;
  for(int idx=(n-1);idx>=0;idx--)
  {
    cout<<elements[idx]<<endl;
  }
  }


}