#include<iostream>
using namespace std;

/* we check the first bit to determine whether a no. is positive(0) or negative(1) */

/* Steps for storing :*/
/* ignore negative sign
    Take 2's complement , if 1 in start, it is negative*/

/* Steps for printing :*/
 /* Take 2's complement of the stored form*/

int main(){

 unsigned int a = 223;   /* unsigned used when only to print +ve numbers*/
 cout << a << endl;

 unsigned int b = -5;
cout << b << endl;

}
/* if we put an -ve num into unsigned , then
  the compiler doesn't recognise the 1 at the start as a -ve sign, and
  so instead prints a very large value.  */




  