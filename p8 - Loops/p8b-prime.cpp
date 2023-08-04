#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int i=2;
    bool c=true;

if (n>2){
    while (i<n){
        if (n%i==0){
            c=false;
            break;
        }

        i++;
    }

        if ( c==true){
            cout << " A prime number" << endl;
            }
        else {
            cout << " Not a prime number" << endl;
             }
}

else {
    cout << " A prime number" << endl;
    }

}