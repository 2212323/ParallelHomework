#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
const int n=100;
int main()
{



       int** b=new int*[n];
       int* a=new int[n];
   int* sum=new int[n];
   for(int i=0;i<n;i++)
   {
       a[i]=i;
       b[i]=new int[n];
       for(int j=0;j<n;j++)
       {
           b[i][j]=i+j;

       }
   }
 long long head, tail , freq ;

     QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
 // start time
    QueryPerformanceCounter((LARGE_INTEGER *)&head);
      for(int i = 0; i < n; i++)
        sum[i] = 0.0;


    for(int j = 0; j < n; j++)
    {
                for(int i = 0; i < n; i++)
                {
                    sum[i] += b[j][i] *a[j];

                }

    }

    QueryPerformanceCounter((LARGE_INTEGER *)&tail );
 // end time
    cout << "Col:" << ( tail - head) * 1000.0 / freq << "ms" << endl ;


   return 0;
}
