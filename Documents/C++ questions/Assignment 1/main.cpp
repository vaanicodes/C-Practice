#include <iostream>

using namespace std;

int main()
{
    int basic, allow, fintotal,x;
    char grade;
	cin >> basic;
    cin >> grade;
    float hra,da, pf, total;
    hra = 20.0/100 * basic;
    da = 50.0/100 * basic;
    if (grade='A'){
        allow=1700;
    } else if (grade='B'){
        allow=1500;
    } else(grade='C');{
        allow=1300;
    }
    pf= 11.0/100 *basic;
    total = basic+hra+da+allow-pf;
    x = total;
    if (total-x>0.50){
        fintotal= x+1;
    } else {
     fintotal= x;}
     cout << fintotal <<endl;
}
