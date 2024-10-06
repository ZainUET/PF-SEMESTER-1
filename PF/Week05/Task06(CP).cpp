#include<iostream>
using namespace std;

void checkAlphabetCase(char);

main()
{   char alp;
    cout<<"Enter a character (A/a): ";
    cin>>alp;
    checkAlphabetCase(alp);
}

void checkAlphabetCase(char alp)
{
    if (alp=='a')
    {
        cout<<"You have entered small a";
    }
    if (alp=='A')
    {
        cout<<"You have entered capital A";
    }
}
