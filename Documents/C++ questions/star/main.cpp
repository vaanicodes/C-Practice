#include <iostream>

using namespace std;

int main()
{
  int N;
    cin >> N;
    int i=1;
        // stars in a row = 2i-1
    // stars in the last row= 2N-1
    // N-i spaces in each row
    // then star
    // N-i spaces in each row
    // print N rows
    while (i<=N){
    int space1 = 1;
    int space2 = 1;
    while (space1<=N-i){
        cout << " ";
        space1 = space1+1;
    }
    int j=1;
    while (j<=(2*i)-1){
        cout << "*";
        j= j+1;
    }
        i=i+1;
        cout << endl;
    }
}
