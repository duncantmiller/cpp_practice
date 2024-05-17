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

string getString() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  return name;
}

int main() {
  int i = getInteger();
  string name = getString();
  cout << " and its double is " << i+i << newline;
  cout << "Hi " << name << " did you like how I added " << i << " and " << i << " to get " << i+i << "?" << newline;
  return 0;
}
