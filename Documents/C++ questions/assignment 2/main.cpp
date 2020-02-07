#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x;
    cin >> x;
    if(x ==0 || x ==1) {
        cout << x;
    }else {int i = 1;
    int result = 1;
    while (result <= x){

        i++;
        result = i*i;
    }
    cout << i-1;
    }


}
