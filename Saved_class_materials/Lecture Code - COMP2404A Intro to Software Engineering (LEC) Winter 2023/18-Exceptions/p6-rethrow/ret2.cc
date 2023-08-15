#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>

string enterName();
void   checkName(string);


int main()
{
  string someName = "abracadabra";

  try {
    someName = enterName();
  }
  catch(const char* error) {
    cout << "main function says: "<<error <<endl;
  }

  cout << "Name: "<<someName<<endl;
  
  return 0;
}

string enterName()
{
  string s;

  cout<<"Enter a name: ";
  cin >> s;
  cout<<endl;

  try {
    checkName(s);
  }
  catch(const char* err) {
    cout << "middle man says: "<<err <<endl;
    throw "... and the fun just goes on!";
  }

  return s;
}

void checkName(string name)
{
  if (name == "Timmy")
    throw "Help, Timmy's been kidnapped by a giant squid!";
}

