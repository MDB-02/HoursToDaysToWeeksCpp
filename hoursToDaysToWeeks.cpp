#include <iostream>
using namespace std;
#include <cmath>
#include <string>

float readNumber(string message)
{
  float hour = 0;
    do
    {
      std::cout << message << std::endl;
      std::cin >> hour;
    } while (hour <= 0);
  return hour;
}

float calcDays(float hours)
{
  float days = hours / 24;
  return days;
}

float calcWeeks(float hours)
{
  float weeks = hours / ( 24 * 7);
  return weeks;
}




int main(){
float hours = readNumber("Enter hours...");
float days = calcDays(hours);
float weeks = calcWeeks(hours);
std::cout << days << " Days" << std::endl;
std::cout << weeks << " weeks" << std::endl;
return 0;
}