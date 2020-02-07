#include<iostream>
using namespace std;

int main () {
 int n;
 cin >> n;
 int a,i;
 int j =0;
 int x;

 cin >> a;
 int max_num = a;
 for (i=2;i<=n;i++) {
    cin >> a;
    if (max_num<a){
        max_num = a;
        j++;
    }
    if (j== 1){
     x = i;
    }

 }
 if (j==0 ||j== n-x+1){
        cout << "true";
    } else {
    cout << "false";
    }

}


