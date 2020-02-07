#include<iostream>
using namespace std;


void printArray(int b[], int n){

    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }
    cout << endl;

}


int main(){
    // stored in hexadecimal location
   // sizeof -> memory allocated
   int n;
   cin >> n;
   int b[100];
   cout << b << endl;
   for(int i=0; i< n; i++){
    cin >> b[i];
   }
  // cout << "Main:" <<sizeof(b) << endl;
   printArray(b, n);
   // only name of array required and size of array
}


