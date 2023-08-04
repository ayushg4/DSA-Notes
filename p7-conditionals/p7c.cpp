// a prog to distinguish between uppercase, lowercase char and 0-9 being input as character

#include<iostream>
using namespace std;

int main(){

    char ch;
    cin >> ch;

    int a = ch;
    cout << a;

    if (a>=97 && a<= 122){
        cout << "The given character lies between a to z." << endl;
    }

    else if (a>=65 && a<= 90){
        cout << "The given character lies between A to Z." << endl;
    }

    else if (a>=48 && a<= 57){
        cout << "The given character lies between 0 to 9." << endl;
    }

    else {
        cout << "The given character is invalid." << endl;
    }
}

// TO DO:
// Allow only single character input, not words or more than one digit nums