#include <iostream>
using namespace std;
int main()
{
    
   int a[]={1,2,3,4,7,6,11,3};
   int size=sizeof(a)/sizeof(int);
   int count=0,i;
   int p1=0;
   int p2;
   int maxp1,maxp2;
   int maxlength=-1;
   
    for(i=0;i<=size-2;i++)
    {
        
        if(a[i]>=a[i+1])
        {
            p2=i+1;
            cout<<p1<<","<<p2-1<<endl;
            if(maxlength<(p2-p1))
            {
            maxp1=p1;
            maxp2=p2;
            maxlength=p2-p1;
            }
            p1=p2;
            
        }   
    }
    cout<<"maximum length is "<<maxlength<<", Start="<<maxp1<<" end ="<<maxp2-1;
   
   return 0;
}