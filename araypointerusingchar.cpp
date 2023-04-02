#include <iostream>
 
using namespace std;
const int X = 4;
 
int main () {
const char *names[X] = { "bhuwan", "aditya", "shanii", "shyam" };

   for (int i = 0; i < X; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << (names + i) << endl;
   }
   
   return 0;
}