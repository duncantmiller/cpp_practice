#include <iostream>
#include <string>
using namespace std;
const string newline = ".\n";

int main() {
  int i;
  cout << "Enter a number: ";
  cin >> i;
  cout << "The number you entered is " << i;
  cout << "and its double is " << i+i << newline;
  return 0;
}
