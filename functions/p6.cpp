// Write a C++ program that defines two functions: celsiusToFahrenheit and fahrenheitToCelsius. celsiusToFahrenheit should convert Celsius to Fahrenheit and fahrenheitToCelsius should convert Fahrenheit to Celsius.
// In the main() function, ask the user for a temperature value and its unit (Celsius or Fahrenheit) and convert it using the respective function.
#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c)
{
    double f = (c*9/5) + 32;
    return f;
}
double fahrenheitToCelsius(double f)
{
    double c = (f - 32) *5/9;
    return c;
}

int main()
{
    cout << "Enter celsius value and convert to fahrenheit" << endl;
    double celsius;
    cin >> celsius;
    double s = celsiusToFahrenheit(celsius);
    cout << s << " fahrenheit " << endl;

    cout << "Enter fahrenheit calue and conver to celsius " << endl;
    double fahrenheit;
    cin >> fahrenheit;
    double y = fahrenheitToCelsius(fahrenheit);
    cout << y << " celsius" << endl;
}