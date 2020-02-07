#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cout << "Enter two numbers" << endl;
   cin >> a >> b;

   /*if (a==b){
    cout << "hey they're equal" << endl;
   } */


   /* if (a==b) {
    cout << "hey these are equal" << endl;
    } else {
        cout << "not equal" << endl;
   } */

   // single line comment

   if (a==b) {
    cout << "Equal" <<endl;
   } else if (a<b){
      cout << "a is smaller" <<endl;
   } else {
       cout << "a is greater" << endl;
   }

}
