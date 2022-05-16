#include <iostream>
using namespace std;
int main()
{
    int a[7] = {4, 1, 2, 1, 6, 1, 2}, i, temp, j, count;
    for (j = 0; j <= 6; j++)
    {
        count = 0;
        for (i = 0; i <= 6; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
                count++;
            }
        }
        if (count == 0)
            break;
    }
    for (i = 0; i <= 6; i++)
        {
            if(a[i]==a[i+1])
            cout<<"\nDuplicate find at "<<i+1;
        }
    

     for (i = 0; i <= 6; i++)
        cout << a[i] << ",";
    return 0;
}