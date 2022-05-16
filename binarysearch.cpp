#include <iostream>
using namespace std;
int main()
{
    
   int a[]={1,2,3,4,5,6,11};
   int size=sizeof(a)/sizeof(int);
   int left=0,right=size-1;
   int search=6;
   while (1)
   {
       int mid=(left + right)/2;
       if(a[mid]==search)
       {
           cout<<"Found at "<<mid<<endl;
           return 0;
       }
       if(search<a[mid])
       right=mid-1;
       else 
       left=mid+1;
       if(left>right)
       {
           cout<<"Not found"<<endl;
           return 0;
       }
   }
   
   
   return 0;
}