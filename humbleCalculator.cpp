#include <iostream>
using namespace std;
#include <cmath>
#include <string>

float readNumber1()
{
    float num;
      std::cout << "Enter first number : \n";
      std::cin >> num;
    return num;
}

float readNumber2()
{
  int num2;
    std::cout << "Enter number 2 : \n";
    std::cin >> num2;
  return num2;
}

char readOprator()
{
  char Operator;
    std::cout << "Enter operator : \n";
    std::cin >> Operator;
  return Operator;
}

float CalculateNumbers(float number1, char Oper, float number2)
{

  if (Oper == '*')
    return number1 * number2;

  else if (Oper == '/')
    return number1 / number2;

  else if (Oper == '+')
    return number1 + number2;
    
  else if (Oper == '-')
    return number1 - number2;
    
  else
    return 0;
}

int main(){
float number1 = readNumber1();
char AOperator = readOprator();
float number2 = readNumber2();

std::cout << number1 << " " << AOperator << " " << number2 << " = "  << CalculateNumbers(number1, AOperator, number2);


return 0;
}