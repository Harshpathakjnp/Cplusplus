                                                          //scope resolution.......
#include<iostream>
using namespace std;
int n=1;
int main()
{
  int n=2;
  {
    int n=3;
     {
    int n=4;
    cout<<n<<","<<::n<<endl;
    }
    cout<<n<<","<<::n<<endl;
  }
   cout<<n<<","<<::n<<endl;
  return 0;
}
