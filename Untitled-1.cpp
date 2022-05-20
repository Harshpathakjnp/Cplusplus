#include <iostream>
using namespace std;
int main()
{
    
   int a[]={1,2,3,4,7,6,11,3};
   int size=sizeof(a)/sizeof(int);
   int count=0,i;
   int p1=0;
   int p2;
   int maxlength=-1;
   
    for(i=0;i<=size-2;i++)
    {
        
        if(a[i]>=a[i+1])
        {
            p2=i+1;
            cout<<p1<<","<<p2-1<<endl;
            p1=p2;
        }
        //cout<<a[i]<<","<<a[i+1]<<",";
        
    }
   
   return 0;
}