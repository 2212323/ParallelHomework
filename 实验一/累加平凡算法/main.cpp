#include <iostream>
#include <windows.h>
using namespace std;
const long long int N =262144/4; // matrix size

long long a[N] , col_sum,sum1,sum2;
void init (int n) // generate a N*N matrix
 {
     for (int i = 0; i < N; i++)

    a[i]=i;



 }

int main()
{
    long long head, tail , freq ; // timers

    QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
 QueryPerformanceCounter((LARGE_INTEGER *)&head);

    double time=0;

 for (int i = 0; i < N; i++)

    a[i]=i;

    for(int k=0;k<1000;k++)
    {


    col_sum = 0.0;
 for(int i=0;i<N;i++)
 {
     col_sum+=a[i];
 }
 // end time

    }
 QueryPerformanceCounter((LARGE_INTEGER *)&tail );
 cout << "Col: " << ( tail - head) * 1000.0 / freq << "ms" << endl;
 return 0;
}
