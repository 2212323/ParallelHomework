#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{

  for(int nq=1;nq<=13;nq++)
  {
      int n=pow(2,nq);
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

long long head, tail,freq ; // timers
 // similar to CLOCKS_PER_SEC
 QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
 // start time
 QueryPerformanceCounter((LARGE_INTEGER *)&head);
 int repeat=1;
 int sumqqq=0.0;
 for(int k=0;k<repeat;k++)
 {
     sumqqq=0.0;
    for(int i = 0; i < n; i++){
        sum[i] = 0.0;
        for(int j = 0; j < n; j++)
            sum[i] += b[j][i] * a[j];
    }
 }
 // end time
 QueryPerformanceCounter((LARGE_INTEGER *)&tail );

 cout<<"n="<<n<<",  "<< "Col: " << ( tail - head) * 1000.0 / freq<< "ms"<< endl;
  }

   return 0;
}
