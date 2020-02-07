#include<iostream>
using namespace std;

int main(){


    char c;

    int count_of_char=0;
    int count_of_digits=0;
    int count_of_whitespaces=0;
    while (c != '$'){
        c= cin.get();
        if ( 97 <= int(c) && int (c) <= 122 ){
            count_of_char++;
        } else if ( 48 <= int(c) && int(c) <= 57){
            count_of_digits++;
        } else if ( c == ' ' || c == '\t' || c == '\n') {
            count_of_whitespaces++;
        }
    }
    cout << count_of_char << " " << count_of_digits << " " << count_of_whitespaces;


}

