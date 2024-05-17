#include <iostream>
#include <string>
using namespace std;
const string newline = ".\n";

int getInteger() {
  int i;
  cout << "Enter a number: ";
  cin >> i;
  return i;
}

int main() {
  int i = getInteger();
  cout << " and its double is " << i+i << newline;
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Hi " << name << " did you like how I added " << i << " and " << i << " to get " << i+i << "?" << newline;
  return 0;
}
