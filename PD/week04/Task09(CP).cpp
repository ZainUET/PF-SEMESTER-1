#include<iostream>
using namespace std;

void tissue_paperChecker(int,int);

main()
{  system("cls");
  int people,tissue_papers;
  cout<<"Number of people in household: ";
  cin>>people;

  cout<<"Number of rolls of TP: ";
  cin>>tissue_papers;

  tissue_paperChecker(people,tissue_papers);
 
}

void tissue_paperChecker(int people,int tissue_papers)
{
  int tpuse=57*people;
  int tpsheets=500*tissue_papers;
  int tpdays=tpsheets/tpuse;
  if(tpdays>=14)
     cout<<"Your TP will last "<<tpdays<<" days, no need to panic!";
  if(tpdays<14)
     cout<<"Your TP will only last "<<tpdays<<" days,buy more!";

}