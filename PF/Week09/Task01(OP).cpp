#include<iostream>
using namespace std;

main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;

  for (int idx = 0; idx < word.length(); idx++)
  {
    cout<<word[idx]<<" is found at Position "<<idx<<endl;
  }
  


}