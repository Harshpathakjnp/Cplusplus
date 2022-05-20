//searchingarray  inside array
#include<iostream>
using namespace std;
int main ()
{
    int a[7]={4,1,2,1,6,1,2},i,pos,b[2]={1,2};
    for(i=0;i<=6;i++)
    {
        if(a[i]==b[0] && a[i+1]==b[1])
        cout<<"Found at "<<i+1;
    }
}