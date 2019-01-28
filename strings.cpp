// Faruqui, Nishat
// Week2  Homework#2- Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
string first = "Nishat";
string last = "Faruqui";
string name = first + " " + last; //concatenation of the two variables

cout << "Name: " << name << endl;
cout << "Length: " << name.length() <<  endl;
cout << "Name: " << name.insert(7, "T ") << endl;
cout << "Initials: " << name.substr(0,1) << "." << name.substr(7,1) << "."
     << name.substr(9,1) << "." << endl;

  return 0;
}
