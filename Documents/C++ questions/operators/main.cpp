#include<iostream>;
using namespace std;
void fibo(int n)
   {
    int f[n];
    int i;
    f[0]=0;
    f[1]=1;
    for (i=2;i<=n;i++){
      f[i]=f[i-1]+f[i-2];
        }
    cout << f[n];
    }

int main ()
{
   int n;
   cin >> n;
   fibo(n);

   return 0;
}
