#include<iostream>
using namespace std;

int main(){

    /* But, if we use cin.get() 
   all the input values are taken as character and then their relevant ASCII integer values is printed*/
 // so here it will read space, enter and tab char too and print their ASCII values

  cout << "Enter the value of c " << endl;
  int c = cin.get();
  cout << " c is " << c << endl;

// also if we change the int to char datatype, then we will get the same input values printed 
}