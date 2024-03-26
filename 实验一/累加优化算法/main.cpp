#include <iostream>
#include <windows.h>
using namespace std;
const long long int N =262144/4; // matrix size

long long a[N] , sum,sum1,sum2;
void init (int n) // generate a N*N matrix
 {
     for (int i = 0; i < N; i++)

    a[i]=i;



 }
//递归
void recursion(int n)
    {
    if (n == 1)
        return;
    else
    {
    for (int i = 0; i < n / 2; i++)
        a[i] += a[n - i - 1];
    n = n / 2;
    recursion(n);
    }
 }
int main()
{
    long long head, tail , freq ; // timers

    QueryPerformanceFrequency((LARGE_INTEGER *)&freq );
 QueryPerformanceCounter((LARGE_INTEGER *)&head);

    double time=0;

 for (int i = 0; i < N; i++)

    a[i]=i;




//多链
  for (int i = 0;i < N; i += 2) {
    sum1 += a[i];
    sum2 += a[i + 1];
    }
  sum = sum1 + sum2;
 // 二重循环
// for (int m = N; m > 1; m /= 2)
//        for (int i = 0; i < m / 2; i++)
//            a[i] = a[i * 2] + a[i * 2 + 1];

 QueryPerformanceCounter((LARGE_INTEGER *)&tail );
 cout << "Col: " << ( tail - head) * 1000.0 / freq << "ms" << endl;
 return 0;
}
