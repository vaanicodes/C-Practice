#include <iostream>
using namespace std;
int main () {
 int n;
    cin >> n;
    int i=1;
    while (i<=(n+1)/2){
        int spaces_1 = 1;
        while (spaces_1<=(n-2*i+1)/2){
            cout << " ";
            spaces_1=spaces_1+1;
        }
        int stars=1;
        while (stars<=2*i-1){
            cout << "*";
            stars=stars+1;
        }
        cout << endl;
        i=i+1;
        }
        int k=1;
        while (k<=(n-1)/2){
            int spaces_2 =1;
            while ( spaces_2<=k){
                cout << " ";
                spaces_2=spaces_2+1;
            }
            int stars_2=1;
            while (stars_2<=(n-2*k)){
                cout << "*";
                stars_2=stars_2+1;
            }
            cout << endl;
            k=k+1;
        }
    }

