#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    int i=1;
    int val = 1;
    cin >> N;
    while (i<=N)
    {
        int j=1;
        while (j<=i){
                cout << val;
                j= j+1;
                val = val+1;
            }
            cout << endl;
            i=i+1;

    }

}

