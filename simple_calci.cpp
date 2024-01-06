#include <iostream>
using namespace std;

/* program that performs basic arithmetic
   operations such as addition, subtraction, multiplication, and
   division.*/

int main() {

 //declaring operation and numbers
  char operation;
  float number1, number2;

 //getting input from user
  cout << "Enter operator: +, -, *, /: ";
  cin >> operation;

  cout << "Enter two operands: ";
  cin >>number1 >>number2;
  
 //using switch case to find the answer
  switch(operation) {

    case '+':
      cout <<number1 << " + " << number2 << " = " << number1 + number2;
      break;

    case '-':
      cout <<number1 << " - " << number2 << " = " << number1 - number2;
      break;

    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      break;

    case '/':
      cout << number1<< " / " << number2 << " = " << number1 / number2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
