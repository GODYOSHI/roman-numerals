#include <iostream>
using namespace std;
/*
  “Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.”
*/

int main() {
  int num;

cout << "Pick a number between 1 and 10:";
cin >>num;

if (num == 1)
 cout << "Your roman numeral is: I \n";
else if (num == 2)
 cout << "Your roman numeral is: II \n";
else if (num == 3)
 cout << "Your roman numeral is: III \n";
else if (num == 4)
 cout << "Your roman numeral is: IV \n";
else if (num == 5)
 cout << "Your roman numeral is: V \n";
else if (num == 6)
 cout << "Your roman numeral is: VI \n";
else if (num == 7)
 cout << "Your roman numeral is: VII \n";
else if (num == 8)
 cout << "Your roman numeral is: VIII \n";
else if (num == 9)
 cout << "Your roman numeral is: IX \n";
else if (num == 10)
 cout << "Your roman numeral is: X \n";
else
  cout << "Invalid input\n";


  
}