#include<iostream>
using namespace std;
int largest_number(int elements[],int n);
main()
{
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int elements[n];
  if (n==0)
  {
    cout<<"Invalid Input!";
    return 0;
  }
  
  
  
  if(n>0)
  {
  
  cout<<"Enter "<<n<<" numbers,one per line: "<<endl;
  for(int idx=0;idx<n;idx++)
  {
    cin>>elements[idx];
  }
  }

  int largest= largest_number( elements ,n);
   cout<<"The Largest number is: "<<largest;


}

int largest_number(int elements[],int n)
{   
    int largest=elements[0];
    for (int i = 1; i<n  ; i++)
    {
        if(elements[i]>largest)
           largest=elements[i];
    }
    return largest;
}