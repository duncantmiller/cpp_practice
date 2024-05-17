#include <iostream>
#include <string>
using namespace std;
const string newline = ".\n";

int main() {
  int i;
  cout << "Enter a number: ";
  cin >> i;
  cout << "The number you entered is " << i;
  cout << " and its double is " << i+i << newline;
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Hi " << name << " did you like how I added " << i << " and " << i << " to get " << i+i << "?" << newline;
  return 0;
}
