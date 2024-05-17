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

void printResults(int i, string name) {
  cout << "The number you entered was " << i;
  cout << " and its double is " << i+i << newline;
  cout << "Hi " << name << " did you like how I added " << i << " and " << i << " to get " << i+i << "?" << newline;
}

void printWinner(int i, string name) {
  cout << "Congratulations " << name << "! You entered the winning number " << i << "!" << newline;
}

int main() {
  int i = getInteger();
  string name = getString();
  if (i == 5)
    printWinner(i, name);
  else
    printResults(i, name);
  return 0;
}
