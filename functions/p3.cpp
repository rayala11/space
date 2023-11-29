// Write a C++ program that defines a function called calculateArea which takes two parameters: length and width (both doubles) and returns the area of a rectangle.
// In the main() function, ask the user for the length and width of rectangles and display their respective areas using the calculateArea function.
#include <iostream>
using namespace std;

int calculateArea(int length, int width)
{
    int area = length * width;
    return area;
}

int main()
{
    cout << "Enter length of rectangle " << endl;
    int x;
    cin >> x;
    cout << "Enter width of rectangle " << endl;
    int y;
    cin >> y;

    int area = calculateArea(x, y);

    cout << area << " is area of rectangle " << endl;
}