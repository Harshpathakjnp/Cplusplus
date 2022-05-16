                                                          //scope resolution.......
#include<iostream>
using namespace std;
int n=1;
int main()
{
  int i=2,j=1,k=3;
  if(i>j && i>k)
  cout<<i<<"is greater";
  else if(j>k)
  cout<<j<<"is greater";
  else
  cout<<k<<"is greater";
  return 0;
}
