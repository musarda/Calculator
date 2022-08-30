#include <iostream>

using namespace std;

int main() {

  double number1 = 0.0, number2 = 0.0, result = 0.0;
  char process = 'x';

  cout << "Created By musarda\n"; // You can delete this
  
  cout << "number1 process number2 : ";
  cin >> number1 >> process >> number2;

  switch (process){
    case '+':
    result = number1 + number2;
      break;
      
    case '-':
    result = number1 - number2;
      break;
      
    case '*':
    result = number1 * number2;
      break;
      
    case '/':
    result = number1 / number2;
      break;
      
    default:
    result = 0;
      break;
  }

  cout << result;

  return 0;
}
