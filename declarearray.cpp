#include <iostream>
 
using namespace std;
const int X = 3;
 
int main () {
   int  var[X] = {10, 100, 200};
   int *ptr[X];
 
   for (int i = 0; i < X; i++) {
      ptr[i] = &var[i]; 
   }
   
   for (int i = 0; i < X; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }
   
   return 0;
}