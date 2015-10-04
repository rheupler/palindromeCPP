#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
  string palin = "", palinCheck;

  cout << "Enter a word: ";
  std::getline(cin, palin);

  palin.erase(std::remove(palin.begin(), palin.end(), ' '), palin.end());

  palinCheck = string(palin.rbegin(), palin.rend());

  cout << "Your word: " << palin << endl;

  cout << "Reversed: " << palinCheck << endl;

  if (palin == palinCheck)
    cout << "YAY IT'S A PALINDROME" << endl;
    else
      cout << "No palindrome for you.";

  return 0;
}
