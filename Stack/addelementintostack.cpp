#include <iostream>
#include <stack>
using namespace std;

int main() {

  
  stack<string> colors;

  
  colors.push("Red");
  colors.push("Orange");
  
  cout << "Stack: ";

  
   while(!colors.empty()) {
    cout << colors.top() << ", ";
    colors.pop();
  }
 
  return 0;
}