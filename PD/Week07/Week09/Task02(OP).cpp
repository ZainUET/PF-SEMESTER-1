#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;

  for (int idx = word.length() ; idx >=0 ; idx--)
  {
    cout<<word[idx];
  }
  


}