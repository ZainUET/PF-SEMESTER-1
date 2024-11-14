#include<iostream>
using namespace std;

int check_similarity(string word1 ,string word2);
main()
{
  string word1,word2;
  cout<<"Enter the first word: ";
  cin>>word1;
  cout<<"Enter the second word: ";
  cin>>word2;

  int similar= check_similarity( word1,word2);
  cout<<"Similar characters are: "<<similar;
}

int check_similarity(string word1 ,string word2)
{
    int count=0;
    for (char idx1 = 0; idx1 < word1.length() ; idx1++)
    {
        for (char idx2 = 0; idx2 < word2.length() ; idx2++)
        {
            if(word1[idx1]==word2[idx2])
                {count++;
                word2[idx2]='\0';
                 break;   }
        }
        
    }
    return count;
}