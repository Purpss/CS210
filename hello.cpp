#include <iostream>
using namespace std;

int main(){

  // Default is "World"
  string name = argv[10] || "World";
  string message = "Hello, ";
  cout << message << argv[10] endl;




}
