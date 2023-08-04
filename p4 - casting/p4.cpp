#include<iostream>
using namespace std;

int main(){

    char a = 99;       /* converted integers into its ASCII equivalent characters*/
    cout << a << endl;

    int b = 'c';       /* converted character into its ASCII equivalent integer*/
    cout << b << endl;

    char c = 34363432;   /* Here, since char stores only one byte and,
                             the given integer is very large
                             it only considers the integers stored in the last byte
                             and prints its equivalent ASCII value*/
    cout << c << endl;

    int d = '(';
    cout << d << endl;
}