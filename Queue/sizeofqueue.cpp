#include <iostream>
#include <queue>
using namespace std;

int main() {

  
  queue<string> languages;

  
  languages.push("Python");
  languages.push("C++");
  languages.push("Java");
  
  
  int size = languages.size();
  cout << "Size of the queue: " << size;

  return 0;
}