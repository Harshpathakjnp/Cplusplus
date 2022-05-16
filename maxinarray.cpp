//max in array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,5,4,3};
    int max,i;
    max=a[0];
    for(i=0;i<=4;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<max;
    return 0;
}