#include <iostream>

using namespace std;

int main()
{
    int arr_1[1000], arr_2[1000], size_1, size_2, x,y;
    int i=0;
    int c=10000;
    cin >> size_1;
    for(x=0;x<size_1; x++){
        cin >> arr_1[x];
    }
    cin >> size_2;
    for(y=0;y<size_2; y++){
        cin >> arr_2[y];
    }
    if(arr_1[i]== arr_2[j]){
        cout << arr_1[i];
        c=j;
    }


    for(i=1;i<size_1;i++){

        for(j=0;j<size_2;j++){
            while(j!=c){
                if(arr_1[i]==arr_2[j]){
                   cout << arr_1[i];
                   c=j;
                   }
                        }
        }
    }



}
