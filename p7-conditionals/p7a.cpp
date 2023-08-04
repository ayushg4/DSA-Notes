#include<iostream>
using namespace std;

int main(){

    int a,b  ;      /* to initialize the variable*/
    cin>> a >> b;    /* to input the value from user*/  
                        /* cin doesn't read the characters - space(" ")  , enter ( \n) , tab ( \t) */

    if (a>b){
        cout << "A is greater." <<endl;
    }
    else {
        cout << "B is greater." <<endl;
    }

/* But, if we use cin.get() 
   all the input values are taken as character and then their relevant ASCII integer values is printed*/

  int c = cin.get();
  cout << " c is " << endl;

}

