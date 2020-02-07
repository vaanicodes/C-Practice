#include <iostream>

using namespace std;

int main()
{
    int n;
    int i=1;
    int k=1;
    cout << "Enter n" <<endl;
    cin >> n;

    while (i<=n) {
        int j =1;
        int space = 1;
        while(space<=(n-i)){
            cout << " ";
            space=space +1;
        }
        int k =i;
        while (j<=i){
            cout << k;
            j= j+1;
            k=k+1;
                }
       cout << endl;
        i=i+1;
    }
}
