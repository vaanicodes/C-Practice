#include <iostream>

using namespace std;

int main()
{
   int n, i, arr[1000];
   cin >> n;
  for(i=0;i<n;i++){
    cin >> arr[i];
   }
   int c;
   for (i=0; i<n; i+2){2
    arr[i] = c;
    arr[i] = arr[i+1];
    arr[i+1] = c;
   }
   for (i=0; i<n; i++){
    cin >> arr[i];
   }
   int j=0;
   for (i=0; i<n; i++){
    for (j=0;j<n;j++){
        while (j!=i){
        if(arr[i]!=arr[j]){
            return arr[i];
        }
        }
    }
   }

}
