#include <iostream>
using namespace std;
#include <cmath>
#include <string>
int readPennies()
{
  int penny;
  std::cout << "how many pennies you have ?\n";
  std::cin >> penny;
  return penny;
}

int readNickels()
{
  int nickl;
  std::cout << "How many nickels you have ?\n";
  std::cin >> nickl;
  return nickl;
}

int readDimes()
{
  int dime;
  std::cout << "How many dimes you have ?\n";
  std::cin >> dime;
  return dime;
}

int readQuarters()
{

  int quarter;
  std::cout << "how many quarters you have ?\n";
  std::cin >> quarter;
  return quarter;

}

int readDollers()
{
  int doller;
  std::cout << "How many dollers you have ?\n";
  std::cin >> doller;
  return doller;
}

float calcPennies(int pennies, int nickels, int dimes, int quarters, int dollers)
{
  float calcNickels = nickels * 5;
  float calcDimes = dimes * 10;
  float calcQuarters = quarters * 25; 
  float calcDollers = dollers * 100;
float TotalPennies = pennies + calcNickels + calcDimes + calcQuarters + calcDollers;
return TotalPennies;
}

float calcDollers(float totalPennies)
{
    float Dollers = totalPennies / 100;
    return Dollers;
}

void printTotalPenniesAndDollers(float totalPennies, float totalDollers)
{
  std::cout << std::endl << "total pennies you have : " << totalPennies << std::endl;
  std::cout << std::endl << "total dollers you have : " << totalDollers << std::endl;
}

int main(){
int pennies = readPennies();
int nickels = readNickels();
int dimes = readDimes();
int quarters = readQuarters();
int dollers = readDollers();

printTotalPenniesAndDollers(calcPennies(pennies, nickels, dimes, quarters, dollers), calcDollers(calcPennies(pennies, nickels, dimes, quarters, dollers)));

return 0;
}